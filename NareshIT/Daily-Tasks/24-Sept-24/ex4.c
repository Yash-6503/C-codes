/*
Que 4 : Write a C program to check given String is palindrom or not using function.
-------

-> create int main() function.
-> create bool isPalindromString(char str[]) function. this function will check given string is palindrom or not and return (true if the string is a palindrome, false otherwise).
-> in main function read one string input and call isPalindromString function. and print the result.

Sample input : radar
Sample output : The string is a palindrome.

Sample input : hello
Sample output : The string is not a palindrome.
*/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

bool isPalindrome();

void main()
{
    if(isPalindrome("radar")==1)
    {
        printf("\nPalindrome");
    }else{
        printf("\nNot Palindrome");
    }
}

bool isPalindrome(char s[])
{
    int i, j, len=0;
    while(s[len] != '\0')
    {
        len++;
    }

    i=0;
    j=len-1;
    while(i<j)
    {
        if(s[i] != s[j])
        {
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}

/*
radar
Palindrome

hello
Not Palindrome
*/