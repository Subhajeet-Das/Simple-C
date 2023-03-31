#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[], int n);
void main()
{
	int a[100],b,n;
	printf("\nEnter the number of inputs:- ");
	scanf("%d",& n);
	for(b=0;b<n;b++)
	{
		printf("\nEnter the %dth input:- ",b+1);
		scanf("%d",& a[b]);
	}
	insertion_sort(a,n);
	printf("\nThe sorted array is:-\n");
	for(b=0;b<n;b++)
	{
		printf("%d\t",a[b]);
	}
	getch();
}
void insertion_sort(int a[], int n)
{
	int i,j,k,b;
	for(i=1;i<n;i++)
	{
		k=a[i];
		for(j=i-1;j>=0 && k<a[j];j--)
		{
			a[j+1] = a[j];
		}
		a[j+1] = k;
		printf("\nStep %d:-\n",i);
		for(b=0;b<n;b++)
		{
			printf("%d\t",a[b]);
		}
		printf("\n");
	}
}
