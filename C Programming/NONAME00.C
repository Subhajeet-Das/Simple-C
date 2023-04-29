#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int len;clrscr();
printf("\n ENTER THE WORD TO FIND ITS LENGTH:- ");
gets(str);
for (len=0;str[len]!='\0';len++);
printf("\n The number of letters in the word is:- %d",len);
getch();
}