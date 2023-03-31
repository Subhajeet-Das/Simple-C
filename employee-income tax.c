#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	float d,f,g,c,e;
	printf("\nEnter the number of employees:- ");
	scanf("%d",&b);
	
	for (a=1;a<=b;a++)
	{
		printf("\nEnter the salary of the %dth Employee:- ",a);
		scanf("%f",& c);
		e=c;
		if (c<=30000)
		{
			printf("\nNo tax payable.");
		}
		else
		{
			if((c>=30001) && (c<=60000))
			{
				d=(c*0.2);
				printf("\nNet tax payable(20 percent of salary):- %.2f",d);
			}
			else
			{
				e=c-60000;
				d=(60000*0.2);
				f=(e*0.3);
				g=d+f;
				printf("\nNet tax payable(20 percent of salary upto 60,000 anf 30 percent of the rest exceeding amount):- %.2f",g);
			}
		}
	}
	getch();
}
