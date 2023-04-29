#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
int i,j;
for(i=0;i<3;i++)
{
printf("\n Enter the element of %d row of 1st Matrix:- ",i+1);
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<3;i++)
{printf("\n Enter the element of %d row of 2nd Matrix:- ",i+1);
for(j=0;j<3;j++)
scanf("%d",&b[i][j]);
}
printf("\n Sum of the Matrix is:\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%3d",c[i][j]);
}
printf("\n");
}
getch();
}