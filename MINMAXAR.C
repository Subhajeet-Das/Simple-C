#include<stdio.h>
#include<conio.h>
void main()
{float a[100],b,c,i,p=0;
printf("\n Enter the number you want to give input:- ");
scanf("%f",&c);
for(b=1;b<=c;b++)
{printf("\n Enter the number:- ");
scanf("%f",&a[b]);}
for(b=1;b<c;b++)
{if(a[b]>a[b+1])
{p=a[b+1];}
else
{p=a[b];}}
printf("\n Maximum number within the array is:- %f",p);
p=0;
for(b=1;b<c;b++)
{if(a[b]<a[b+1])
{p=a[b];}
else
{p=a[b+1];}}
printf("\n Minimum number within the array is:- %f",p);
getch();
}