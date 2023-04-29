#include <stdio.h>
#include <conio.h>
int fact(int x,int n);
int main()
{
    int n,j,k=0,d;
    printf("\nEnter the nth term:-  ");
    scanf("%d",& n);
    for (j=1;j<=n;j++)
    {
    	d=fact(j,n);
        k+=d;
    }
    printf ("\n THE FACTORIAL OF %dth TERM IS:- %d",n,k);
    getch();
}
 int fact(int x,int n)
{
	int p=1,i;
	for (i=1;i<=x;i++)
    {
        p=p*i;
    }
    return p;
}
