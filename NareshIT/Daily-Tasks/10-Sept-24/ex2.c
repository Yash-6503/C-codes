/*
Que 2 : Write a program in C to delete an element at a 
desired position from an array.
-------
Sample input :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3

Sample output :
The new list is : 1 2 4 5
*/

#include<stdio.h>
void main()
{
    int a[100], i, j, n, ele, f;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to delete: ");
    scanf("%d", &ele);

    f=0;
    printf("\nThe List is: ");
    for(i=0; i<n; i++)
    {
        if(a[i] != ele)
        {
            printf("%3d", a[i]);
        }else{
            f=1;
        }

    }
    if(f == 0)
    {
        printf("\nElement %d not found", ele);
    }
}

/*
Enter array size: 5

Enter 5 elements: 
element - 0: 1

element - 1: 2

element - 2: 3

element - 3: 4

element - 4: 5

Enter element to delete: 3

The new List is:   1  2  4  5
*/

/*
Enter array size: 5

Enter 5 elements: 
element - 0: 1

element - 1: 2

element - 2: 3

element - 3: 45

element - 4: 5

Enter element to delete: 6

The List is:   1  2  3 4 5

Element 6 not found
*/