/*
3.
Write a program in C to compute the sum of all
elements in an array using pointers.
--------

Sample input :
Input the number of elements to store in the array (max 10) : 5
Input 5 number of elements in the array : 2 3 4 5 6

Sample output : The sum of array is : 20 
*/

#include<stdio.h>
void main()
{
    int n, i, a[10], *p, sum=0;
    printf("\nEnter size of array (max 10): ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    p=a;
    for(i=0; i<n; i++)
    {
        sum += p[i];
    }
    printf("\nSum of all elements of array is: %d", sum);
}

/*
Enter size of array (max 10): 5

Enter 5 elements: 2
3
4
5
6

Sum of all elements of array is: 20
*/