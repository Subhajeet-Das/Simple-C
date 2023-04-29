#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,pi=3.1416,ta,l;
    printf("Enter The Number Given In The Brackets to Perform The Work:- \n \n 1)Area of Circle  (Press 1) \n 2)Area of Rectangle  (Press 2) \n 3)Area of Square  (Press 3) \n 4)Exit  (Press 4)");
    printf("\n Enter The Number:- ");
    scanf("%f",&a);
    if(a==1)
    {
        printf("\n Enter The value of Radius:- ");
        scanf("%f",&b);
        ta=pi*b*b;
        printf("\n The Area of The Circle is:- %f",ta);
        }
    if(a==2)
    {
        printf("Enter The Length:- ");
        scanf("%f",&l);
        printf("Enter The Breadth:- ");
        scanf("%f",&b);
        ta=l*b;
        printf("\n The Area of The Rectangle is:- %f",ta);
        }
    if(a==3)
    {
        printf("\n Enter The Length:- ");
        scanf("%f",&l);
        ta=l*l;
        printf("\n The Area of The Square is:- %f",ta);
        }
    if(a==4)
    {
        printf("\n You Wanted to Exit.");
        }
    if(a>=5)
    {
        printf("\n Invalid Input.");
	}
    getch();
    }
