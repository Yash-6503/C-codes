/*
Write a program to delete the suplicate elements 
of an array
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, k;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                for(k=j, n--; k<j; k++)
                {
                    a[k] = a[k+1];
                }
                j--;
            }
        }
    }

    printf("\nArray is: ");
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }
}

/*
Enter array size: 9

Enter 9 elements: 1
2
3
1
2
3
1
2
3

Array is:  1 2 3
*/

/*
Enter array size: 5

Enter 5 elements: 1
2
3
2
2

Array is:  1 2 3
*/