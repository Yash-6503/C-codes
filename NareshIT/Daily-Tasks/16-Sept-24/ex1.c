/*
Que 1 : Write a c program to check the String is Palindrome 
or Not .
-------
Sample input : madam

Sample output : madam is a palindrome
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
    char s[100], rev[100];
    int i, j;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    i = 0;
    j = strlen(s)-1;
    while(i<j)
    {
        if(s[i] >='A' && s[i] <= 'Z'){
            s[i]+=32;
        }

        if(s[i] != s[j])
        {
            printf("\nNot a Palindrome");
            return;
        }else{
            i++;
            j--;
        }
    }
    printf("\nPalindrome");

    // int length = 0;
    // while(s[length] != '\0')
    // {
    //     length++;
    // }

    // for(i=0; s[i]!='\0'; i++)
    // {
    //     r[i] = s[i];
    // }

    // for(i=0; i<length/2; i++)
    // {
    //     char temp = s[i];
    //     s[i] = s[length - 1 - i];
    //     s[length-1-i] = temp;
    // }

    // if(strcmp(s,r) == 0){
    //     printf("\nPalindrome");
    // }
    // else{
    //     printf("\nNot a Palindrome");
    // }
}

/*
Enter a String: madam
Palindrome

Enter a String: nini
Not a Palindrome
*/