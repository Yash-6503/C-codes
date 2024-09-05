/*
1. 
Write a program in C to find the sum of all elements of the array.
-------
Sample input:
element - 0 : 2
element - 1 : 5
element - 2 : 8

Sample output :
Sum of all elements stored in the array is : 15
*/

#include<stdio.h>
void main()
{
    int a[10], n, i, sum=0;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("\nSum of all elements stored in the array is: %d", sum);
}

/*
Enter how many elements: 3

Enter 3 elements: 2
5
8

Sum of all elements stored in the array is: 15
*/

/*
Enter how many elements: 5

Enter 5 elements: 10
5
20
10
5

Sum of all elements stored in the array is: 50
*/