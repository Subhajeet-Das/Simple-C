#include <stdio.h>
#include <conio.h>
#include<math.h>
int fact(int x,int n);
int main()
{
    int n,j,k=0,d,y,l=1,m=0,q=0,x;
    printf("\nEnter the value of Y:- ");
    scanf("%d",&y);
    printf("\nEnter the nth term:-  ");
    scanf("%d",& n);
    for (j=1;j<=n;j++)
    {
    	if(j%2==0)
    	{
    		d=fact(l,n);
    		m=(pow(y,l)/d);
    		k=k-m;
		}
		else
		{
			d=fact(l,n);
        	k=k+(pow(y,l)/d);
		}
        l+=2;
    }
    printf ("\nTHE FACTORIAL OF %dth TERM IS:- %d",n,k);
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
