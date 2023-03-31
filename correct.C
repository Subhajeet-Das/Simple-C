#include<stdio.h>
#include<conio.h>
void main()
{
int i,p;
for(i=0;i<=4;i++)
     {
	for(p=0;p<=4;p++)
	{
		if((i==1&&p==1)||(i==1&&p==2)||(i==1&&p==3)||(i==2&&p==1)||(i==2&&p==2)||(i==2&&p==3)||(i==3&&p==1)||(i==3&&p==2)||(i==3&&p==3))
		{
		       printf("   ");
		}
		else
		{
			printf(" S ");
		}
	}
	printf("\n\n");
     }
getch();
}