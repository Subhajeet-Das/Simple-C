#include<stdio.h>
#include<conio.h>
void main()
{float a,b,c;clrscr();
printf("\n Enter 1st number:- ");
scanf("%f",&a);
printf("\n Enter 2nd number:- ");
scanf("%f",&b);
printf("\n Enter 3rd number:- ");
scanf("%f",&c);
if((a>b)&&(a>c))
{printf("\n Max number is %f",a);}
if((b>a)&&(b>c))
{printf("\n Max number is %f",b);}
else
{printf("\n Max number is %f",c);}
getch();
}
