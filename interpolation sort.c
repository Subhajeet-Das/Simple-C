#include <stdio.h>
 
// find out if a target x exists in the sorted array A
// or not using Interpolation search algorithm
int InterpolationSearch(int A[], int n, int x)
{
    // search space is A[low..high]
    int low = 0, high = n - 1, mid;
 
    while (A[high] != A[low] && x >= A[low] && x <= A[high])
    {
        // estimate mid
        mid = low + ((x - A[low]) * (high - low) / (A[high] - A[low]));
 
        // target value is found
        if (x == A[mid])
            {return mid;}
 
        // discard all elements in the right search space
        // including the mid element
        else if (x < A[mid])
            {high = mid - 1;}
 
        // discard all elements in the left search space
        // including the mid element
        else
            {low = mid + 1;}
    }
 
    // if target is found
    if (x == A[low])
        {return low ;}
 
    // x doesn't exist in the array
    else
        {return -1;}
}
 
// Interpolation search algorithm
void main()
{
    int target,tr,f;
    printf("Enter the number you want to give input:- ");
    scanf("%d",&tr);
    int A[tr];
    for(f=0;f<tr;f++)
    {printf("\nEnter the element[%d]:- ",f);
    scanf("%d",&A[f]);
	}
	printf("\nEnter the number you want to search:- ");
	scanf("%d",&target);
    int n = sizeof(A)/sizeof(A[0]);
    int index = InterpolationSearch(A, n, target);
 
    if (index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found in the array");
 
    getch();
}
