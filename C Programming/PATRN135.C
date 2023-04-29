#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0,i=0;
printf("enter the line number:- ");
scanf("%d",&a);
for(c=1;c<=a;c++)
{
b=1;
for(i=1;i<=c;i++)
{printf("%d ",b);
b=b+2;
}
printf("\n");
}
getch();
}