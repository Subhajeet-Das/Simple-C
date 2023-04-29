#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("\n enter the first number:- ");
scanf("%d",&a);
printf("\n enter the second number:- ");
scanf("%d",&b);
printf("\n enter the third number:- ");
scanf("%d",&c);
d=a>b?a>c?a:b>a?b>c?b:c>a?c>b?c
printf("\n %d",d);
getch();
}
