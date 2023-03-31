#include<stdio.h>
#include<conio.h>
int avg(int e,int f,int g);
int main()
{
    
   int a,b,c,d;
   clrscr();
    printf ("\n ENTER THE FIRST MARK: ");
    scanf ("%d",& a);
    printf ("\n ENTER THE SECOND MARK: ");
    scanf ("%d",& b);
    printf ("\n ENTER THE THIRD MARK: ");
    scanf ("%d",& c);
    d=avg(a,b,c);
    printf ("\n THE AVERAGE OF 3 MARKS IS: %d",d);
    getch();
    return 0;
    }
    int avg(int e,int f, int g)
    {
    int output;
    output=(e+f+g)/3;
    return output;
    }
