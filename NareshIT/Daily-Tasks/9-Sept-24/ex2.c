/*
Que 2 : Write a program in C to print all unique elements in an array.
-------
Sample input:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5

Sample output :
The unique elements found in the array are:3 5
*/

#include<stdio.h>
void main()
{
    int a[100], i, j, n, c=0;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nThe unique elements found in the array are: ");
    for(i=0; i<n; i++)
    {
        for(j=0, c=0; j<n; j++)
        {
            if(a[i] == a[j])
            {
                c++;
            }
        }

        if(c == 1)
        {
            printf("%2d", a[i]);
        }
    }
}

/*
Enter array size: 4

element - 0: 3

element - 1: 2

element - 2: 2

element - 3: 5

The unique elements found in the array are:  3 5
*/

/*
Enter array size: 5

element - 0: 5

element - 1: 2

element - 2: 2

element - 3: 3

element - 4: 2
 
The unique elements found in the array are: 5 3
*/