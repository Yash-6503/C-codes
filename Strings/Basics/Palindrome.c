/*
Write a C program to find the palindrome of a given string
using for & while loops
*/

#include<stdio.h>
void main()
{
    int i, j, len=0;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    //finding string length using while loop
    /*
    while(s[len] != '\0')
    {
        len++;
    }
    */

    //finding a length of a string using a for loop
    for(i=0; s[i]!='\0';i++)
    {
        len++;
    }
    

    //finding palindrome of a string using while loop
    /*
    i=0;
    j=len-1;
    while(i<j)  
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i]+=32;
        }

        if(s[j] >= 'A' && s[j] <= 'Z'){
            s[j]+=32;
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
    */

    //finding a palindrome using a for loop
    j=1;
    for(i=0; i<len/2; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]+=32;
        }

        if(s[len-1-i] >= 'A' && s[len-1-i] <= 'Z')
        {
            s[len-1-i]+=32;
        }

        if(s[i] != s[len-1-i])
        {
            j=0;
            break;
        }
    }
    if(j!=0){
        printf("\nPalindrome");
    }else{
        printf("\nNot a Palindrome");
    }
}

/*
Enter a String: MaDam
Palindrome
*/

/*
Enter a String: mADeM
Not a Palindrome
*/