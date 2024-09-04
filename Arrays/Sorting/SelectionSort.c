#include<stdio.h>
void main()
{
    int n, a[100], i, j, temp;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
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

    printf("\nSorted Array is: ");
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }
}

/*
Enter how many elements: 5

Enter 5 elements: 4
1
3
5
2

Sorted Array is:  1 2 3 4 5
*/

/*
Enter 4 elements: -2
0
2
1

Sorted Array is: -2 0 1 2 
*/