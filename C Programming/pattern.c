#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e=0,f;
	printf("enter the number of rows:- ");
	scanf("%d",&a);
	for(b=a;b>0;b--)
	{
		for(c=1;c<=a;c++)
		{
			printf("%d",c);
		}
		for(d=0;d<e;d++)
		{
			printf("*");
		
		}
		for(f=a;f>0;f--)
		{
			printf("%d",f);
		}
		printf("\n");
		e=e+2;
		a--;
	}
	getch();
}
