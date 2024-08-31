/*
program to find HCF - (Highest common factor) of a given 2 numbers
*/

#include<stdio.h>
void main()
{
    int a, b, hcf;
    printf("\nEnter a and b value: ");
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a && i<=b; i++)
    {
        if(a%i == 0 && b%i ==0)
        {
            hcf = i;
        }
    }
    printf("\nHCF of %d and %d is %d", a, b, hcf);
}

/*
Enter a and b value: 8 12
HCF of 8 and 12 is 4

Enter a and b value: 10 15
HCF of 10 and 15 is 5

Enter a and b value: 10 20
HCF of 10 and 20 is 10
*/