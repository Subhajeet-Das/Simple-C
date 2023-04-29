#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int a,b;
	char s[50];
	printf("\nEnter the number of input:- ");
	scanf("%d",& b);
	FILE *fp;
	fp=(fopen("D:\\SUBHAJEET.txt","w"));
	if(fp=NULL)
	{
		printf("\nERROR");
		exit(1);
	}
	printf("\nNew Entries:- ");
	for(a=1;a<=b;a++)
	{
		printf("\nEnter student name:- ");
		scanf("%s",&s);
	}
	fclose(fp);
	getch();
}
