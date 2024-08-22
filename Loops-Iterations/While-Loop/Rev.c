//Reverse the number using loop

#include<stdio.h>
void main()
{
    int n, r, rev=0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n<0) printf("-", n=-n);
    do
    {
        r = n%10;
        // rev = rev*10+r;
        printf("%d",r);
        n = n/10;
    }while(n!=0);
    // printf("\nReverse is %d", rev);
}

/*
Enter a number: 123
Reverse is 321

Enter a number: -100
-001

Enter a number: 1000
0001
*/

/*
n=123, rev=0, r;
while(n!=0)         123!=0          12!=0           1!=0            0!=0 false
{       
    r = n%10;       123%10 => 3     12%10 => 2      1%10 => 1
    rev = rev*10+r  0*10+3 => 3     3*10+2 => 32    32*10+1 => 321
    n = n/10;       123/10 => 12    12/10  => 1     1/10 => 0
}
*/
