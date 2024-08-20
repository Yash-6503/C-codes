/*
2. Finding first and last digits of given no
Eg: 7925 ==> 7 first digit, 5 last digit
*/

#include<stdio.h>
void main()
{
    int n, last, first, i=1;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    last = n%10;
    first = n;
    while(first >= 10)
    {
        first /= 10;
    }
    printf("\nFirst digit is %d", first);
    printf("\nLast digit is %d", last);
}

/*
Enter a number: 1234
First digit is 1
Last digit is 4

Enter a number: 7925
First digit is 7
Last digit is 5

Enter a number: 500359
First digit is 5
Last digit is 9
*/