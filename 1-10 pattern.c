#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c=1;
	for (a=1;a<=4;a++)
	{
		for(b=0;b<a;b++)
		{
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
	getch();
}
