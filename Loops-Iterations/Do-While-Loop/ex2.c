//Find Sum of digits 


#include<stdio.h>
void main()
{
    int n, sum=0, r;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    do
    {
        r = n%10;
        sum += r;
        n=n/10;
    }while(n!=0);
    printf("\nSum of digits is %d", sum);
}

/*
n = 123, r, sum=0
while(n!=0)         123 /   12  /   1   / 0-false
{
    r = n%10;       123%10 => 3     12%10   => 2    1%10    => 1
    sum += r;       0 + 3 => 3      3+2     => 5    1+5     => 6
    n = n/10;       123/10 => 12    12/10   => 1    1/10    => 0
}

sum => 6
*/

/*
Enter a number: 46
Sum of digits is 10

Enter a number: 5551
Sum of digits is 16

Enter a number: 10010
Sum of digits is 2

Enter a number: -55
Sum of digits is -10
*/
