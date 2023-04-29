#include<stdio.h>
#include<conio.h>
#define PI 3.14
float cos(float,int);
void main()
{
	int a;
	float b,c;
	printf("\nEnter the angle:- ");
	scanf("%f",&b);
	printf("\nEnter the terms:- ");
	scanf("%d",&a);
	c=cos(b,a);
	printf("\nSum of cos%f in %d terms is:- %f",b,a,c);
	getch();
}
float cos( float an,int tr)
{
	float r=1.0,s=1.0,f=1.0,p=1.0;
	int d;
	an=an*(PI/180);
	for(d=1;d<=tr;d++)
	{
		s=s*(-1);
		f=f*(2*d-1)*(2*d);
		p=p*an*an;
		r=r+s*(p/f);
	}
	return r;
}
