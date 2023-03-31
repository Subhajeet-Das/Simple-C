#include<stdio.h>
#include<conio.h>
void mergesort(int a[],int p,int r);
void merge(int a[],int p,int m,int r);
void main()
{
	int a[100],n,b;
	printf("\nEnter the number of inputs:- ");
	scanf("%d",&n);
	for(b=0;b<n;b++)
	{
		printf("\nEnter the [%d]th element:- ",b+1);
		scanf("%d",& a[b]);
	}
	mergesort(a,0,n);
	printf("\nThe sorted array is:-\n");
		for(b=0;b<n;b++)
	{
		printf("%d\t",a[b]);
	}
	getch();
}
void mergesort(int a[],int p,int r)
{
	int m=0;
	if(p<r)
	{
		m=p+(r-p)/2;
		mergesort(a,p,m);
		mergesort(a,m+1,r);
		merge(a,p,m,r);
	}
}
void merge(int a[],int p,int m,int r)
{
	int n1,n2,i,j,i1=0,j1=0,k=p;
	n1=(m-p)+1;
	n2=r-m;
	int a1[n1],a2[n2];
	for(i=0;i<n1;i++)
	{
		a1[i]=a[p+i];
	}
	for(j=0;j<n2;j++)
	{
		a2[j]=a[m+1+j];
	}
	while(i1<n1 && j1<n2)
	{
		if(a1[i1] <= a2[j1])
		{
			a[k]=a1[i1];
			i1++;
		}
		else
		{
			a[k]=a2[j1];
			j1++;
		}
		k++;
	}
	while(i1<n1)
	{
		a[k]=a1[i1];
		i1++;
		k++;
	}
	while(j1<n2)
	{
		a[k]=a2[j1];
		j1++;
		k++;
	}
}
