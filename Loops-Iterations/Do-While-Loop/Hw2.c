//Finding no of digits in given number without using loops

#include<stdio.h>
void main()
{
    long n, count=0;
    printf("\nEnter number: ");
    scanf("%ld", &n);
    up:
    if(n!=0)
    {
        count++;
        n=n/10;
        if(n <= n)
            goto up;
    }

    printf("Digits in number is %ld", count);
    
}

/*
Enter number: 1234
Digits in number is 4

Enter number: 11
Digits in number is 2

Enter number: 10004030
Digits in number is 8
*/