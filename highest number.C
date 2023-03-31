#include<stdio.h>
#include<conio.h>
Void main(){
				int num,rem;
    clrscr();
    printf ("ENTER THE NUMBER:  ");
    scanf ("%d",& num);
    rem=num%2;
    if (rem==0)
    			printf ("THE NUMBER IS EVEN");
    else
    			printf ("THE NUMBER IS ODD");
    getch();
    return 0;
    }