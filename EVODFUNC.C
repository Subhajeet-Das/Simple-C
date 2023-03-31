#include<stdio.h>
#include<conio.h>
int num(int eo);
void main()
{int a,b;
printf("\n Enter the number:- ");
scanf("%d",&a);
b=num(a);
if(b==0)
{printf("The number is Even");}
else
{printf("The number is Odd");}
getch();
}
int num(int eo)
{int p;
p=eo%2;
return p;}
