/*
Program to delete an element from an array using
skipping method.
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, ele;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to delete: ");
    scanf("%d", &ele);

   
    printf("\nArray is: ");
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }

    printf("\nAfter Deleting element array is: ");
    for(i=0; i<n; i++)
    {
        if(a[i] != ele)
        {
            printf("%2d", a[i]);
        }
    }

}

/*
Enter array size: 5

Enter 5 elements: 1
2
3
4
5

Enter element to delete: 3

Array is:  1 2 3 4 5
After Deleting element array is:  1 2 4 5
*/