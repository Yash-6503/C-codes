/*
5.
Write a program in C to store elements in an array and print them.

Sample input:
element - 0 : 1
element - 1 : 1
element - 2 : 2
element - 3 : 3
element - 4 : 4
element - 5 : 5
element - 6 : 6
element - 7 : 7
element - 8 : 8
element - 9 : 9

Sample output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/

#include<stdio.h>
void main()
{
    int a[100], i, n;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d : ", i);
        scanf("%d", &a[i]);
    }

    printf("\nElements in array are: ");
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }
}

/*
Enter how many elements: 10

element - 0 : 1

element - 1 : 1

element - 2 : 2

element - 3 : 3

element - 4 : 4

element - 5 : 5

element - 6 : 6

element - 7 : 7

element - 8 : 8

element - 9 : 9

Elements in array are:  1 1 2 3 4 5 6 7 8 9
*/