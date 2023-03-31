#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(y) (pow(x,3)+x*x-1);
void main()
{
double a,b,m=-1,x,y;
int n=0,k,i;
printf("\n Enter the value of A:- ");
scanf("%lf",& a);
printf("\n Enter the value of B:- ");
scanf("%lf",& b);
printf("How many itteration you want:- ");
scanf("%d",& k);
printf("\n n     A          B       xn=a+b/2    sign of (xn)/n");
printf("\n_________________________________________________\n");
for(i=1;i<=k;i++)
{x=(a+b)/2;
y=f(x);
if(m==x)
{break;}
if(y>=0)
{printf("%d   %5lf    %5lf    %5lf   +\n",i,a,b,x);
b=x;}
else if(y<0)
{printf("%d   %5lf    %5lf    %5lf   +\n",i,a,b,x);
a=x;}
m=x;
}
printf("\n The approximation to the root is %.4lf which is upto 4D",b);
return 0;
}