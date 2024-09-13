/*
Half elements in ascending and half elements in descending 
order:
*/

#include<stdio.h>
void main()
{
    int a[100], i, j, n, temp=0;
    printf("\nEnter array size: ");
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

    printf("\nHalf Ascending & Half Descending is: \n");

    for(i=0; i<n/2; i++)
    {
        printf("%3d", a[i]);
    }

    for(i=n-1; i>=n/2; i--)
    {
        printf("%3d", a[i]);
    }
}

/*
Enter array size: 10

Enter 10 elements: 1 2 3 4 5 6 7 8 9 0

Half Ascending & Half Descending is: 
  0  1  2  3  4  9  8  7  6  5
*/