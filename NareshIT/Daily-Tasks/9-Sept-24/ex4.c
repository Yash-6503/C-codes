/*
Que 5 : Write a program in C to find the maximum and minimum elements in an array.
-------	
Sample input :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21

Sample output :
Maximum element is : 45
Minimum element is : 21
*/

#include<stdio.h>
void main()
{
    int n, a[100], i;
    int max=0, min = a[0];
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nInput %d elements: ", n);
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d : ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i<n; i++)
    {
        if(max < a[i])
            max = a[i];
    }

    for (i = 0; i<n; i++)
    {
        if(min > a[i])
            min = a[i];
    }

    printf("\nMaximum element is: %d", max);
    printf("\nMinimum element is: %d", min);
}

/*
Enter array size: 3

Input 3 elements in the array : 
element - 0 : 45

element - 1 : 25

element - 2 : 21

Maximum element is: 45
Minimum element is: 21
*/