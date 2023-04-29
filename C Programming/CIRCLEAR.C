#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
float ac,r;
clrscr();
printf("\n Enter the radius of the circle:- ");
scanf("%f",&r);
ac=2*PI*r;
printf("\n The area of the circle is:- %f",ac);
getch();
}
