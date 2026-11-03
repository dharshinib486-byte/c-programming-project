#include<stdio.h>
int main()
{
  int pin=1234;
  int enteredpin;
  int choice;
  float balance=5000;
  float amount;

  printf("=====WELCOME TO ATM=====\n");

  printf("Enter your pin:");
  scanf("%d",&enteredpin);

  if(enteredpin!=pin)
  {
     printf("invalid pin!\n");
     return 0;
  }

  printf("\nlogin successfully!\n");

  do
  {
     printf("\n=====ATM MENU=====\n");
     printf("1. Check balance\n");
     printf("2. Deposit money\n");
     printf("3. Withdraw money\n");
     printf("4. Exit\n");

     printf("Enter your choice:");
     scanf("%d",&choice);

     switch(choice)
     {
       case 1:
	 printf("Your balance:Rs.%2f\n",balance);
	 break;

       case 2:
	 printf("Enter deposit amount:");
	 scanf("%f",&amount);

	 if(amount>0)
	 {
	    balance=balance+amount;
	    printf("Money deposited successfully!\n");
	    printf("New balance:Rs.%2f\n",balance);
	 }
	 else
	 {
	    printf("invalid amount!\n");
	 }
	 break;

      case 3:
	printf("Enter withdrawal amount:");
	scanf("%f",&amount);

	if(amount<=0)
	{
	  printf("invalid amount!\n");
	}
	else if(amount<=balance)
	{
	  balance =balance-amount;
	  printf("Please collect your cash.\n");
	  printf("Remaining balance:Rs.%2f\n",balance);
	}
	else
	{
	  printf("Insufficient balance!\n");
	}
	break;

      case 4:
	printf("Thank you for using ATM!\n");
	break;

      default:
	printf("invalid choice!\n");
      }
  }while(choice!=4);
  return 0;
}