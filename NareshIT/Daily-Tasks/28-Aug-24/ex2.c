/*
2.
Check Prime Number
Write a C program to check the given number is a prime number or not.
Sample Input
Enter a number : 13
Sample Output
13 is a Prime Number.
*/

#include<stdio.h>
void main()
{
    int n, i, count=0;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    if(n<1){
        printf("\nNumber is prime number");
    }
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            count = 1;
            break;
        }
        else{
            count = 0;
            break;
        }

    }
    if(count == 0)
    {
        printf("\nNumber is a prime number");
    }else{
        printf("\nNumber not a is prime number");
    }
        
}

/*
Enter Number: 13
Number is a prime number

Enter Number: 6
Number not a is prime number

Enter Number: 3
Number is a prime number
*/