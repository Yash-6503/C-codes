/*
3.
Write a C program to check if a given number is a palindrome. A palindrome is a
 number that remains the same when its digits are reversed. For example, 
121, 454 and 767 are palindromic numbers. The program should prompt the user to 
enter a positive integer and determine whether it is a palindrome or not.

Input as:
Enter a number : 121 

Output as:
121 is a Palindrome number
*/

#include<stdio.h>
void main()
{
    int n, rev=0, r, m;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    m=n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf(m==rev?"Palindrome" : "Not Palindrome");
    // puts(m==rev?"Palindrome" : "Not Palindrome");
    // if(m == rev)
    // {
    //     printf("\n%d is a palindrome number", rev);
    // }
    // else{   
    //     printf("\n%d is not a palindrome number", rev);
    // }
}

/*
Enter a number: 123
321 is not a palindrome number

Enter a number: 121
121 is a palindrome number
*/