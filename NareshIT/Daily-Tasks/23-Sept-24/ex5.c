/*
Que 5 : Write a program in C to swap two numbers using a function.
-------

-> create int main() function.
-> create void swap(int a, int b) function.
-> in main function read two values and call swap function and print the values before swap and after swap.

Sample input :
               Input 1st number : 2
               Input 2nd number : 4

Sample output :
               Before swapping: n1 = 2, n2 = 4
               After swapping: n1 = 4, n2 = 2
*/

#include<stdio.h>
void main()
{
    int n1, n2;
    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("\nBefore Swapping : n1 = %d, n2 = %d", n1, n2);
    swap(n1, n2);
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping : n1 = %d, n2 = %d", a, b);
}

/*
Enter 2 numbers: 2
4

Before Swapping : n1 = 2, n2 = 4
After Swapping : n1 = 4, n2 = 2
*/