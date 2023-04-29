#include <stdio.h>
#include <conio.h>
void main()
{
float c,f;
int option,check=0;
clrscr();
printf("\n Press 1 to get the farenheut value\n Press 2 to get the centigrade value\n Enter your choice:- ");
scanf("%d",&option);
switch(option)
{case 1:{printf("\n ENTER THE CENTIGRADE(C) VALUE:- ");
scanf("%f",&c);
f=(9*c+160)/5;
check=1;
break;}
case 2:{printf("\n ENTER THE FARENHEIT VALUE:- ");
scanf("%f",&c);
f=(5*c-160)/9;
check=2;
break;}
default:{printf("\n INVALID INPUT");check=0;}
}
if(check==1)
{printf ("\n THE FARENHEIT VALUE IS:- %f",f);}
if(check==2)
{printf("\n THE CENTIGRADE VALUE IS;- %f",f);}
getch();
}
