#include <stdio.h>
int main ()
{ 
    int arr[20],size,i, j,temp;
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements of array,,,,,,");
    for(i=0;i<size;i++)
    {
        printf("\n enter the %d element",i+1);
        scanf("%d", & arr[i]);
   
    }
    
    
     printf("/n sortedf array is,,,,,");
    for (i=0;i<size;i++)
    printf("/%d",arr[i]);
    return 0;
    }
    */
    OUTPUT;
Enter the size of array 4
Enter the elements of array,,,,,,
 enter the 1 element3
 enter the 2 element9
 enter the 3 element6
 enter the 4 element2
 /n sortedf array is,,,,,/3/9/6/2
 */
