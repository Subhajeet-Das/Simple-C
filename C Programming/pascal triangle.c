#include<stdio.h>
#include<conio.h>
void main()
{
	int k,l,x=1,r;
	printf("\nEnter the number of rows:- ");
	scanf("%d",&r);
	for(k=0;k<r;k++)
	{
		for(l=r;l>k;l--)
		{
			printf(" ");
		}
		for(l=0;l<=k;l++)
		{
			if(k==0|| l==0)
			{
				x=1;
			}
			else
			{
				x=x*(k-l+1)/l;
			}
			printf("%d ",x);
		}
		printf("\n");
	}
	getch();
}
