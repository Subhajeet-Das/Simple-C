#include<stdio.h>
#include<conio.h>
void main()
{
char line[30];
FILE *fp;
clrscr();
fp=fopen("textbyme.txt","w");
if(fp==NULL)
{printf("\n File could not be opened.");
exit();}
printf("\n Enter a string:- ");
gets(line);
fputs(line,fp);
fclose(fp);
printf("\n Writting to the file is complete.");
getch();
}