#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("\nEnter the number of rows:- ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=b;c++)
		{
			if(c%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	getch();
}
