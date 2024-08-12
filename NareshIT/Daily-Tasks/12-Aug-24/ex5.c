/*
Question: Write a c program that if the numbers last digit is 
less than 5 then print the square of the number otherwise 
print the same number
without using control flow statements. 

sample input: 12
sample output: 144

sample input: 17
sample output:17
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    n%10<5 && printf("\nSquare of %d is %d", n, n*n) || printf("\nNumber is %d", n);
}

/*
Enter a number: 12
Square of 12 is 144

Enter a number: 17
Number is 17
*/