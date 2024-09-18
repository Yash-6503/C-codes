/*
Que 1: 
Write a program to checkthe given string is palindrome or not 
Sample input : Enter a String : madam

Sample input : madam
		  
output:- palindrome
*/

#include<stdio.h>
void main()
{
    char s[100];
    int i, j, length=0;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    for(i=0; s[i]!='\0'; i++)
    {
        length++;
    }

    i=0;
    j=length-1;
    while(i<j)
    {
        if(s[0] >= 'A' && s[0] <= 'Z')
        {
            s[i] += 32;
        }

        if(s[i] != s[j])
        {
            printf("\nNot a palindrome");
            return;
        }else{
            i++;
            j--;
        }
    }
    printf("\nPalindrome");
}

/*
Enter a String: Madam
Palindrome

Enter a String: sir
Not a palindrome
*/