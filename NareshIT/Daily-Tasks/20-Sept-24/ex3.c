/*
Que 3 : Write a program in C to store n elements in an array
and print the elements using a pointer.
-------

Sample input :

Input the number of elements to store in the array :5

Input 5 number of elements in the array :

element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8

Sample output :
The elements you entered are :                                        

element - 0 : 5                                                
element - 1 : 7                                                
element - 2 : 2                                                
element - 3 : 9                                                
element - 4 : 8 
*/

#include<stdio.h>
void main()
{
    int i, a[10], n;
    int *p;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements in array: ", n);
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d : ", i);
        scanf("%d", &a[i]);
    }

    p = a;

    printf("\nElements you have entered: ");
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d : %d", i, *(p+i));
    }
}

/*
Enter array size: 5

Enter 5 elements in array: 

element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8

Elements you have entered: 

element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
*/