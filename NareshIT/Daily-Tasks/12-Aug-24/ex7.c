/*
Question: Write a c program that will find the sum of 2 
character ascii values.
sample input: a b
sample output:195
*/

#include<stdio.h>
void main()
{
    char a, b;
    int sum;
    printf("\nEnter 2 characters: ");
    scanf("%c %c", &a, &b);
    printf("\nSum of %c[%d] and %c[%d] is %d", a, a, b, b, a+b);
}


/*
Enter 2 characters: a
b
Sum of a[97] and b[98] is 195

Enter 2 characters: A
B
Sum of A[65] and B[66] is 131
*/