//Finding factorial of number

#include<stdio.h>
void main()
{
    int n, fact=1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        fact *= n;
        n--;
    }
    printf("\nFactorial is %d", fact);
}

/*
Enter a number: 4
Factorial is 24

Enter a number: 5
Factorial is 120
*/

/*
n = 4, fact = 1;
while(n!=0)         4!=0        3!=0        2!=0        1!=0        0!=0 false;
{   
    fact *= n;      1*4 => 4    4*3 => 12   12*2 => 24  24*1 => 24
    n--;            4-- => 3    3-- => 2    2--  => 1   1-- => 0
}
factorial => 24
*/