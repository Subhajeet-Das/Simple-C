#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0;
printf("\n enter the number:- ");
scanf("%d",&a);
b=a;
while(a!=0)
{
c=a%10;
a=a/10;
d=d+c;
}
printf("\n the sum all digits of %d is %d",b,d);
getch();
}
