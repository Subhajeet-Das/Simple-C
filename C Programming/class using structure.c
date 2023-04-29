#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
struct class{
	char name[100];
	int roll;
	char branch[50];
	float marks;
};
	struct class a[40],b[40][30];
	int c,d;
	for(c=0;c<30;c++)
	{
		printf("\nEnter name:- ");
		/*fflush(stdin);*/
		scanf("%s",& a[c].name);
		printf("\nEnter roll number:- ");
		scanf("%d",&a[c].roll);
		printf("\nEnter Branch:- ");
		scanf("%s",& a[c].branch);
		for(d=0;d<8;d++)
		{
			printf("\nEnter Marks:- ");
			scanf("%f",& b[c][d].marks);
		}
	}
	for(c=0;c<30;c++)
	{
		printf("\nName:- %s",a[c].name);
		printf("\nBranch:- %s",a[c].branch);
		printf("\nRoll Number:- %d",a[c].roll);
		printf("\nMarks:- \n");
		for(d=0;d<8;d++)
		{
			printf("\t%f",b[c][d].marks);
		}
		printf("\n\n");
	}
	getch();
}

