#include <stdio.h>
int main ()
{ 
    int arr[20],size,i, j,temp;
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements of array -------");
    for(i=0;i<size;i++)
    {
        printf("\n array in %d element: ",i+1);
        scanf("%d", &arr[i]);
    }
    
    
    printf("\n sorted array is -------");
    for (i=0;i<size;i++)
    printf("\t%d",arr[i]);
    return 0;
    }
/*
Enter the size of array 3
Enter the elements of array -------
 array in 1 element: 2
 array in 2 element: 4
 array in 3 element: 5
 sorted array is -------	2	4	5
*/
