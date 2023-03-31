#include<stdio.h>
#include<conio.h>
float average(float ist,float iind,float iiird)
{
float result=1;
result=(ist+iind+iiird)/3;
return result;
}
void main()
{
float a,b,c,output;
printf("\n Enter the first number:- ");
scanf("%f",&a);
printf("\n Enter the second number:- ");
scanf("%f",&b);
printf("\n Enter the third number:- ");
scanf("%f",&c);
output=average(a,b,c);
printf("|n The average of the numbers %f,%f,%f is:- %f",a,b,c,output);
}