/*
3.
Write a program in C to read N number of values in an array and display them in reverse order.

Sample input :
element - 0 : 2
element - 1 : 5
element - 2 : 7

Sample output :
The values store into the array are :2 5 7
The values store into the array in reverse are :7 5 2
*/

#include<stdio.h>
void main()
{
    int a[10], n, i;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe values store into the array are : ");
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }

    printf("\nThe values store into the array in reverse are : ");
    for(n--; n>=0; n--)
    {
        printf("%2d", a[n]);
    }
}

/*
Enter how many elements: 3

Enter 3 elements: 2
5
7

The values store into the array are : 2 5 7
The values store into the array in reverse are : 7 5 2
*/

/*
Enter how many elements: 3

Enter 3 elements: 10
20
30

The values store into the array are : 10 20 30
The values store into the array in reverse are : 30 20 10
*/