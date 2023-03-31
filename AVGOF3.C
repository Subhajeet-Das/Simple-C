#include<stdio.h>
#include<conio.h>
float average(float base,float index,float power);
int main()
{
    
    float a,b,c,output;
    printf ("\n Enter 1st number:- ");
    scanf ("%f",& a);
    printf ("\n Enter 2nd number:- ");
    scanf ("%f",& b);
    printf ("\n Enter 3rd number:- ");
    scanf ("%f",& c);
    output=average(a,b,c);
    printf ("\n The average of 3 numbers is:- %f",output);
    getch();
    return 0;
}
float average(float base,float index,float power)
{
    float result=1;
    result=(base+index+power)/3;
    return result;
}
