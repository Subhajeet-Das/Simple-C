#include <stdio.h>
#include <conio.h>

int month_counter(int);

void main()
{
	int d1,d2,m1,m2,i,a,total,days,final=0;
	printf("\n\t!! Days Counter !!\n\nEnter the details of starting date:-\n");
	printf("\nEnter the date (dd):- ");
	scanf("%d",& d1);
	printf("\nEnter the month (mm):- ");
	scanf("%d",& m1);
	printf("\nEnter the details of ending dates:-\n");
	printf("\nEnter the date (dd):- ");
	scanf("%d",& d2);
	printf("\nEnter the month (mm):- ");
	scanf("%d",& m2);
	total = month_counter(m1);
	days= total-(d1-1);
	final= final + days + d2;
	
	for(i=m1+1;i<=m2-1;i++)
	{
		a = month_counter(i);
		final = final+ a;
	}
	if(m1 == m2)
	{
		total= month_counter(m1);
		if(d2<=total)
		{
			final = d2-(d1-1);
		}
		else
		{
			printf("\n Invalid number of days");
			end();
		}
	}
	if((m1 == m2)&&(d1==d2))
	{
		final = 0;
	}
	printf("\nTotal days:- %d",final);
	getch();
}

int month_counter(int m)
{
	int tot,fla;
	if((m == 1)||(m == 3)||(m == 5)||(m == 7)||(m == 8)||(m == 10)||(m == 12))
	{
		tot = 31;
	}
	else
	{
		if((m == 4)||(m == 6)||(m == 9)||(m == 11))
		{
			tot = 30;
		}
		else
		{
			if(m == 2)
			{
				tot=28;
			}
			else
			{
				printf("\nInvalid Input of starting month");
			}
		}
	}
	return tot;
}
