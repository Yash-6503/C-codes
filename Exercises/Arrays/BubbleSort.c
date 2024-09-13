/*
Program to sort an array using bubble sort.
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, temp=0;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<=n-2; i++)
    {
        for(j=1; j<=n-i-2; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
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

Enter 5 elements: 5
4
3
2
1

Sorted array is:  5 1 2 3 4
*/