#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	char d = 'A';
	for (a=1;a<=4;a++)
	{
		for(b=0;b<a;b++)
		{
			printf("%c ",d+b);
		}
		printf("\n");
	}
	getch();
}
