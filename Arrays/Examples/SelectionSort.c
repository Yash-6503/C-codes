/*
Program to sort the given array using selection sort
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, temp;
    printf("\nEnter array size: ");
    scanf("%d",&n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<=n-2; i++)
    {
        for(j=i+1; j<=n-1; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted array is: ");
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }
}

/*
Enter array size: 5

Enter 5 elements: 3
1
4
5
2

Sorted array is:  1 2 3 4 5
*/