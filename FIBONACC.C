#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,c=1,d,e=1;clrscr();
printf("\n Enter Nth term:- ");
scanf("%d",&a);
while(a!=0)
{if(a>=1)
{d=b+c;
printf("\n %d term value is %d\n",e,b);
b=c;c=d;
}
a--;e++;
}
getch();
}
