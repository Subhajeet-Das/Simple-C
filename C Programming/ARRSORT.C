#include<stdio.h>
#include<conio.h>
int main()
{int a,b[50],i,p,m;
printf("\n Enter the number you want to give input:- ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{printf("\n Enter the number %d;- ",i);
scanf("%d",&b[i]);}
for(i=1;i<a;i++)
{for(p=i+1;p<=a;p++)
{if(b[i]>b[p])
{m=b[i];
b[i]=b[p];
b[p]=m;}}}
for(i=1;i<=a;i++)
{printf("%d",b[i]);
printf("\n");
}
return 0;
}