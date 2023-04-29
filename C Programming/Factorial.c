#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,p=1;
    printf("\n ENTER THE NUMBER :-  ");
    scanf("%d",& n);
    for (i=1;i<=n;i++)
    {
        p=p*i;
    }
    printf ("\n THE FACTORIAL OF %d IS:- %d",n,p);
    getch();
    }
