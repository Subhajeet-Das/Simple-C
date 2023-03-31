#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
struct cricket{
	char name[100];
	char team[50];
	float batav;
};
	struct cricket player[50];
	int c,e;
	float d;
	for(c=0;c<50;c++)
	{
		printf("\nEnter the player name:- ");
		/*fflush(stdin);*/
		scanf("%s",& player[c].name);
		printf("\nEnter team name:- ");
		scanf("%s",& player[c].team);
		printf("\nEnter batting average:- ");
		scanf("%f",& player[c].batav);
	}
	for(c=0;c<50;c++)
	{
		for(e=0;e<50-c;e++)
		{
		if(player[c].batav>player[e].batav)
		{
			d=player[c].batav;
		}
	}
	}
	printf("\nPlayer with highest batting average is:-");
	for(c=0;c<50;c++)
	{
		if(d==player[c].batav)
		{
		printf("\nName:- %s",player[c].name);
		printf("\nBranch:- %s",player[c].team);
		printf("\nBatting average:- %f",player[c].batav);
		}
	}
	getch();
}

