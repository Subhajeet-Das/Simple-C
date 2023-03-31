#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z=0;clrscr();
	printf("\n enter 2 numbers:- ");
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("\n add:- %d",z);
	z=x-y;
	printf("\n sub:- %d",z);
	z=x*y;
	printf("\n mul:- %d",z);
	z=x/y;
	printf("\n div:- %d",z);
	return 0;
}
