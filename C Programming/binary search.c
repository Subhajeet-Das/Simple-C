#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],b,f,l,m,n,c;
	printf("\n\t-:\t |BINARY SEARCH| \t:-\n");
	printf("\nEnter the number of inputs:- ");
	scanf("%d",& n);
	
	for(b=0;b<n;b++)
	{
		printf("\nEnter the element[%d]:- ",b+1);
		scanf("%d",& a[b]);
	}
	
	printf("\nEnter the element you want to search:- ");
	scanf("%d",& c);
	f=0;
	l=(n-1);
	m=(f + l)/2;
	
	while (f <= l)
	{
		if(a[m] == c)
		{
			printf("\nThe element %d is found at location %d",c,m+1);
			break;
		}
		if(a[m] < c)
		{
			f = m+1;
		}
		else
		{
			l = m-1;
		}
		m=(f + l)/2;
		printf("%d",a[m]);
	}
	
	if(f>l)
	{
		printf("\n!! Element not found !!");
	}
	getch();
}
