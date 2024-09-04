/*
Bubble sort program in descending order
*/

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
        for(j=0; j<=n-i-2; j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nSorted Array in Descending Order: \n");
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }
}

/*
Enter how many elements: 5

Enter 5 elements: 3
5
1
4
2

Sorted Array in Descending Order: 
 5 4 3 2 1
*/