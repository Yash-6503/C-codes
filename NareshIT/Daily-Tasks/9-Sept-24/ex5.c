/*
Que  6 : Write a program in C to separate odd and even integers into separate arrays.
--------
Sample input :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32

Sample output :
The Even array is : [42,56,32]
The Odd array is : [25,47]
*/

#include<stdio.h>
void main()
{
    int a[100], i, j, n;
    int e[10] = {0}, o[10] = {0};
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d : ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i] %2 == 0)
        {
           e[i] = a[i];
        }else{
            o[i] = a[i];
        }
    }

    printf("\nThe Even array is: [");
    for(i=0; i<n; i++)
    {
        if(e[i] != 0)
            printf("%d, ", e[i]);
    }
    printf("\b\b]");

    printf("\nThe Odd array is: [");
    for(i=0; i<n; i++)
    {
        if(o[i] != 0)
            printf("%d, ", o[i]);
    }
    printf("\b\b]");
}

/*
Enter array size: 5

Enter 5 elements: 
element - 0 : 25

element - 1 : 47

element - 2 : 42

element - 3 : 56

element - 4 : 32

The Even array is: [42, 56, 32] 
The Odd array is: [25, 47]
*/

/*
Enter array size: 5

Enter 5 elements: 
element - 0 : 1

element - 1 : 2

element - 2 : 3

element - 3 : 4

element - 4 : 5

The Even array is: [2, 4] 
The Odd array is: [1, 3, 5]
*/