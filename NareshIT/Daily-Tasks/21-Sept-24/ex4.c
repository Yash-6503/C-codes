/*
4.
Write a program in C to print the elements of an array in reverse 
order using pointer.
--------

Sample input :
Input the number of elements to store in the array (max 15) : 5
Input 5 number of elements in the array : 2 3 4 5 6

Sample output : 
The elements of array in reverse order are :  6 5 4 3 2                                                               
*/

#include<stdio.h>
void main()
{
    int a[10], *p, n, i;
    printf("\nEnter array size (max 15): ");
    scanf("%d", &n);
    if(n <= 15)
    {
        printf("\nEnter %d elements: ", n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        p=a;
        printf("\nReverse elements are: ");
        for(i=n-1; i>=0; i--)
        {
            printf("%d ", p[i]);
        }
    }else{
        printf("\nPlease enter array size less than 15");
    }
}

/*
Enter array size (max 15): 5

Enter 5 elements: 2 3 4 5 6

Reverse elements are: 6 5 4 3 2
*/

/*
Enter array size (max 15): 18

Please enter array size less than 15
*/