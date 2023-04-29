#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0;clrscr();
printf("\n Enter the number:- ");
scanf("%d",&a);
b=a;
while(a!=0)
{
c=a%10;
a=a/10;
d=d+(c*c*c);
}
if(b==d)
{printf("\n %d is an amstrong number.",b);}
else
{printf("\n %d is not an amstrong number.",b);}
getch();
}
