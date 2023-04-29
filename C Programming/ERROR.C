#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i=0,d;
clrscr();
printf("\n Enter the first number of the series:- ");
scanf("%d",&a);
printf("\n Enter the last number of the series:- ");
scanf("%d",&b);
for(c=a;c<=b;c++)
{
for(i=2;i<=c;i++)
{
if(c%i==0)
{
d=1;
break;
}
}
if(d==1)
{
printf("\n %d is a prime number  %d",c,d);
}
else
{
printf("\n %d is not a prime number  %d",c,d);
}
}
getch();
}