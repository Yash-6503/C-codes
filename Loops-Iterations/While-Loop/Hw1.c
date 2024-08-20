/*
1.
Finding no of digits in given no using loops
Eg: 2076 ==> 4 digit no
*/

#include<stdio.h>
void main()
{
    int count = 0;
    long num;
    printf("\nEnter a number: ");
    scanf("%ld", &num);
    while(num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("\nNumber contains %d Digits", count);
}

/*
Enter a number: 2076
Number contains 4 Digits

Enter a number: 50500
Number contains 5 Digits

Enter a number: 450700
Number contains 6 Digits
*/