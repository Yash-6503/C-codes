/*
Que 2 : Write a C program to check if a string contains only digits.
--------

-> create int main() function.
-> create bool isContainsDigits(char str[]) function. this function will take string as input and will return (true if String contains only digits otherwise return false).
-> in main function read String and pass it to isContainsDigits fuction by calling it and print the result.


Sample input  : 12345
Sample output : The string contains only digits.


Sample input : 45A7
Sample output : The string contains non-digit characters.
*/

#include<stdio.h>
#include<stdbool.h>

bool isDigit();

void main()
{
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    if(isDigit(s)==1)
    {
        printf("\nThe string contains only digits.");
    }else{
        printf("\nThe string contains non-digit characters.");
    }
}

bool isDigit(char * s)
{
    int i, c;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            c++;
        }
    }
    if(c==i)
    {
        return true;
    }else{
        return false;
    }
}

/*
Enter a String: 1234
The string contains only digits.

Enter a String: 45A7
The string contains non-digit characters
*/