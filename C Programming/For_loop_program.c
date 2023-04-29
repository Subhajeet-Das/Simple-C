#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;

    printf("\nEnter the number of iterarions:- ");
    scanf("%d", & a);

    for(b = 1; b <= 10; b ++)       //This for loop will the "Computer" word 10 times. 
    {
        printf("\nComputer");
    }

    for(c = b; c <= a; c++)     //This for loop will print from 11 to the rest of the numbers untill the given input value is reached.
    {
        printf("\n%d",c);
    }

    return 0;
}