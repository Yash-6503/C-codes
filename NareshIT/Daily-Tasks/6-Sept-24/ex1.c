/*
1.
Write a C program to Sort the array in ascending order and print it.
Sample Input
Enter array size : 6

Enter 6 element : 4 3 5 6 2 1
Sample Output
After sorting in ascending order :
1 2 3 4 5 6
*/
#include<stdio.h>
void main()
{
    int a[100], n, i, j, temp;
    printf("\nEnter Array Size(1-100): ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<=n-2; i++)
    {
        for(j=0; j<=n-i-2; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nAfter sorting in ascending order: ");
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }
}

/*
Enter Array Size(1-100): 6

Enter 6 elements: 4 3 5 6 2 1

After sorting in ascending order:  1 2 3 4 5 6
*/

/*
Enter Array Size(1-100): 5

Enter 5 elements: 50 30 40 10 20

After sorting in ascending order: 10 20 30 40 50
*/