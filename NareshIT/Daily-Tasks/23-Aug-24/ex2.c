/*
2.
Write a C program that asks the user to input an integer and count
 the digts and print the count of the digits.

Input as : 
Enter a number : 546

Output as :
Count of the digits is : 3
*/

#include<stdio.h>
void main()
{
    int n, count=0, r;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("-", n=-n);
    }
    do
    {
        r=n%10;
        count++;
        n=n/10;
    }while(n);
    printf("%d count of digit", count);
}

/*
Enter a number: 546
3 count of digit

Enter a number: -100
-3 count of digit

Enter a number: 10000
5 count of digit

Enter a number: 0
1 count of digit
*/