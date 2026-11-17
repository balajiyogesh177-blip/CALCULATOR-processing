#include<stdio.h>
int main()
{
int a,b;
char op;
printf("enter the first number:");
scanf("%d",&a);
printf("enter operater(+,-,*,/):");
scanf("%c",&op);
printf("enter second number:");
scanf("%d",&b);
switch(op)
{
case"+":
printf("result=%d",a+b);
break;
case"-":
printf(result=%d",a-b);
break;
case"*":
printf("result=%d",a*b);
break;
case"/":
printf("result=%d",a/b);
else
printf("cannot divided by zero");
break;
default;
printf("invalid operater");
}
return 0;