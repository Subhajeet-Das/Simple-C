#include<stdio.h>
#include<math.h>
#include<conio.h>

float f(float x)
{
    return x*sin(x) + cos(x);                   /* A continuous equation between given interval*/
  
}
void main()
{
    float a,b,c,d,e;
       clrscr();
    printf("\nEnter  the interval (a,b)\n");
    scanf("%f%f",&a,&b);
    printf("\nEnter the tolerance value\n");
    scanf("%f",&d);

    do
    {
	c = (a+b)/2;
	if(f(c) * f(a) < 0)
	   {b=c;}
	else
	   {a=c;}
    }
    while(fabs(a-b)>d||f(c)==0);

    printf("Root is %f",c);
    getch();
}