#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b=-1,c=0,d;
	d=++a&&++b||c--;
	if(d)
	{printf("kol%d",d);
	}
	else if(c)
	{printf("del%d",d);
	}
	else
	{printf("ban%d",d);
	}
	getch();
}
