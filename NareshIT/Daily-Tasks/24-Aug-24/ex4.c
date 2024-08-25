/*
4.
Write a C program to check the given number is a perfect number or not?

If a sum of the multiples of the number excluding the given number is same 
as the original number then we can say that number is a perfect number.

6 multiples are 1,2,3,6 : sum of multiples = 1+2+3 = 6

6 is a perfect number.
*/

#include<stdio.h>
void main()
{
    int n, i=1, mul=0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        if(n%i==0 && i<n)
        {
            mul += i;
            // printf("%3d", i);
        }
        // printf("\n%3d", i);
        i++;
    }
    // printf("\n%3d\n", mul);
    printf(mul==n ? "Perfect number" : "Not a Perfect number");
}

/*
Enter a number: 496
Perfect number

Enter a number: 6
Perfect number

Enter a number: 100
Not a Perfect number
*/