#include <stdio.h>
void main()
{
   int arr[10][10];
   int r,c,k,l,flag=1;
     
   printf("Input number of Rows for the matrix :");
   scanf("%d", &r);
   printf("Input number of Columns for the matrix :");
   scanf("%d",&c);   
	 
   printf("Input elements in the first matrix :\n");
   for(k=0; k<r; k++)
      {
       for(l=0; l<c; l++)
          {
	  printf("element - [%d],[%d] : ",k,l);
	  scanf("%d",&arr[k][l]);
          }
      }    
    printf("The matrix is :\n");
    for(k=0; k<r; k++)
       {
       for(l=0; l<c; l++)
	 {
           printf("%d  ",arr[k][l]);
          }
       printf("\n");
      }

    for(k=0; k<r; k++)
       {
       for(l=0; l<c; l++)
          {
	 if(arr[k][l] != 1 && arr[l][k] !=0)
	   {
	    flag = 0;
	    break;
	   }
	 }
      }

   if (flag == 1 )
      printf("\n The matrix is an identity matrix.");
   else
      printf("\n The matrix is not an identity matrix.");
   getch();
}

