#include<stdio.h>
#include<conio.h>
double func(double x)
{
    return x*x*x - 2*x*x + 3;
}
double e=0.01,c;
void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
	printf("Incorrect a and b");
	return;
    }
    c = a;
    while ((b-a) >= e)
    {
	c = (a+b)/2;
	if (func(c) == 0.0)
	{
	    printf("Root = %lf\n",c);
	    break;
	}
	else if (func(c)*func(a) < 0)
	{
		printf("Root = %lf\n",c);
		b = c;
	}
	else
	{
		printf("Root = %lf\n",c);
		a = c;
	}
    }
}

void main()
{
    double a,b;
    printf("The function used is x^3-2x^2+3\n");
    printf("\nEnter the value of 'a':- ");
    scanf("%lf",&a);
    printf("\nEnter the value of 'b':- ");
    scanf("%lf",&b);
    printf("a = %lf\n",a);
    printf("b = %lf\n",b);
    bisection(a,b);
    printf("\n");
    printf("Accurate Root calculated is = %lf\n",c);
    getch();
}