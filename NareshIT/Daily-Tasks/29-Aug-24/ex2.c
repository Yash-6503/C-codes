/*
2.
Automorphic number
Write a program to check given number is Automorphic number 
or not.

Sample Input
input = 25
Sample Output
25 is Automorphic number.
*/

#include<stdio.h>
void main()
{
    long int n, sqr, temp, count = 1;
    printf("\nEnter Number: ");
    scanf("%ld", &n);
    sqr = n*n;
    printf("\nSquare = %ld", sqr);
    
    temp=n;
    while(temp!=0)
    {
        if(temp%10 != sqr%10)
        {
            count = 0;
            break;
        }
        temp=temp/10;
        sqr=sqr/10;
    }

    if(count == 1)
    {
        printf("\n%ld is an Automorphic number", n);
    }else{
        printf("\n%ld is not Automorphic number", n);
    }
}

/*
Enter Number: 25
Square = 625
25 is an Automorphic number

Enter Number: 76
Square = 5776
76 is an Automorphic number

Enter Number: 376
Square = 141376
376 is an Automorphic number

Enter Number: 625
Square = 390625
625 is an Automorphic number

Enter Number: 90625
Square = 8212890625
90625 is an Automorphic number

Enter Number: 9376
Square = 87909376
9376 is an Automorphic number
*/

/*
Enter Number: 100
Square = 10000
100 is not Automorphic number

Enter Number: 500
Square = 250000
500 is not Automorphic number

Enter Number: 7
Square = 49
7 is not Automorphic number
*/