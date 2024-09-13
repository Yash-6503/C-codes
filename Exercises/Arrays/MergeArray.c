/*
Program to merge 2 arrays and sort them in ascending order
and display them.
*/

#include<stdio.h>
void main()
{
    int a[100], b[100], i, j, n1, n2, temp=0;
    printf("\nEnter size of first array: ");
    scanf("%d", &n1);

    printf("\nEnter size of second array: ");
    scanf("%d", &n2);

    printf("\nEnter %d elements of first array: ", n1);
    for(i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter %d elements of second array: ", n2);
    for(i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=n1, j=0; i<n1+n2; i++, j++)
    {
        a[i] = b[j];
    }

    for(i=0; i<n1+n2; i++)
    {
        for(j=i+1; j<n1+n2; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    

    printf("\nElements are: ");
    for(i=0; i<n1+n2; i++)
    {
        printf("%3d", a[i]);
    }
}

/*
Enter size of first array: 4

Enter size of second array: 4

Enter 4 elements of first array: -5
-1
-8
1

Enter 4 elements of second array: 0
4
2
3

Elements are:  -8 -5 -1  0  1  2  3  
*/

/*
Enter size of first array: 4

Enter size of second array: 4

Enter 4 elements of first array: 1
2
5
6

Enter 4 elements of second array: 3
4
7
8

Elements are:   1  2  3  4  5  6  7  8
*/