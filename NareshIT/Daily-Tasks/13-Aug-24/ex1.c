/*
1.
Develop a C program that takes an integer input and checks whether 
it is even or odd. Print "Even" if it's even, and "Odd" if it's odd.

Input as : 
Enter a Integer : 20

Output as : 
Even

*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("\nEven");
    }
    else
    {
        printf("Odd");
    }
}

/*
Enter a number: 10
Even

Enter a number: 5
Odd
*/