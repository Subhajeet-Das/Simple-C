#include<stdio.h>
#include<conio.h>
typedef struct record
	{int value;
	struct record *next;
	}NODE;
void append(int data);
void display();
NODE *start=NULL;
void main()
{	int prompt,data;
	do{printf("\n Enter <1> to add new node to list,<0> to end list:- ");
	scanf("%d",& prompt);
	if(prompt==1)
	{	printf("\n Enter data:- ");
		scanf("%d",& data);
		append(data);
	}}while(prompt!=0);
clrscr();
display();
getch();}
void append(int data)
{	NODE *temp,*curr;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->value=data;
	temp->next=NULL;
	if(start==NULL)
		{start=temp;}
	else
		{curr=start;
		while(curr->next!=NULL)
			{curr=curr->next;}
			curr->next=temp;
			}
	}
void display()
{	int count=0;
	NODE*curr=start;
	printf("\n Current list:- \n\n");
	while(curr!=NULL)
		{printf(" Data %d=%d\n",++count,curr->value);
		curr=curr->next;
		}
	}
