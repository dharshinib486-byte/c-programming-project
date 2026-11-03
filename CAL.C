#include<stdio.h>
int main()
{
char y;
float a,b;
printf("Enter expression(e.g.5+3):");
scanf("%f %c %f",&a,&y,&b);
switch(y)
 {
   case'+':printf("=%.2f\n",a+b);break;
   case'-':printf("=%.2f\n",a-b);break;
   case'*':printf("=%.2f\n",a*b);break;
   case'/':
      if(b!=0)printf("=%.2f\n",a/b);
      else    printf("division by zero!\n");
      break;
   default:printf("invalid operator\n");
 }
 return 0;
}