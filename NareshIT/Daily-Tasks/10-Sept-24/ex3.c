/*
Que 3 :Write a program in C to find a pair with given 
sum in the array.
-------
Sample input:
The given array : 6 8 4 -5 7 9
The given sum : 15

Sample output :
Pair of elements can make the given sum by the value of index 0 and 5
The sum pair 15 is: (6,9) (8,7)
*/

#include<stdio.h>
void main()
{
    int a[100], i, j, n, sum=0;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter sum: ");
    scanf("%d", &sum);

    printf("\nPair of elements can make the given sum by the value of index 0 and 5 ");
    printf("\nThe sum pair %d is: ", sum);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(sum == a[i]+a[j])
            {
                printf("(%d,%d) ", a[i], a[j]);
            }
        }
    }
}

/*
Enter array size: 6

Enter 6 elements: 6 8 4 -5 7 9

Enter sum: 15

Pair of elements can make the given sum by the value of index 0 and 5 
The sum pair 15 is: (6,9) (8,7)
*/