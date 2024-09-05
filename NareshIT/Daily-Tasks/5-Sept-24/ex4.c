/*
4.
Write a program in C to copy the elements of one array into another array.
-------
Sample input :
element - 0 : 15
element - 1 : 10
element - 2 : 12

Sample output :
The elements stored in the first array are :15 10 12
The elements copied into the second array are :15 10 12
*/

#include<stdio.h>
void main()
{
    int a[10], b[10], n, i, j;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    printf("\nThe elements stored in the first array are : ");
    for(i=0; i<n; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\nThe elements copied into the second array are: ");
    for(i=0; i<n; i++)
    {
        printf("%3d", b[i]);
    }

}

/*
Enter how many elements: 3

Enter 3 elements: 15
10
12

The elements stored in the first array are :  15 10 12
The elements copied into the second array are:  15 10 12
*/