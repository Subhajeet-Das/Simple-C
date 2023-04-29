#include <stdio.h>
#include <conio.h>
#define PI 3.1416
void main()
{
float R,H,Sa,Vol;clrscr();
printf("\n Enter the Radius of the solid cone:- ");
scanf("%f",&R);
printf("\n Enter the Hight of the solid cone:- ");
scanf("%f",&H);
Sa=PI*R*(R+H);
Vol=(PI*R*R*H)*1/3;
printf("\n The Surface Area is :- %f",Sa);
printf("\n The Volume is :- %f",Vol);
getch();
}