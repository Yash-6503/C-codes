/*
Que 2 :Write a c Program to check whether two given strings
 are anagram of each other or not.
-------
Sample input 1:- listen
Sample input 2:- silent
Sample output: this are anagram String

Sample input 1:- Jack
Sample input 2:- Jake
Sample output : this is not are anagram String
*/

#include<stdio.h>
#include<string.h>

void main()
{
    int i, sum1=0, sum2=0;
    char s1[100], s2[100];

    printf("\nEnter 2 Strings: ");
    scanf("%[^ ] %[^\n]", s1, s2);

    // printf("\nEnter Second String: ");
    // scanf("%[^\n]", s2);

    if(strlen(s1) != strlen(s2))
    {
        printf("\nNot anagram");
        return;
    }
    else{
        for(i=0; i<strlen(s1); i++)
        {
            sum1+=s1[i];
            sum2+=s2[i];
        }
    }

    if(sum1 == sum2)
    {
        printf("\nAnagram");
    }else{
        printf("\nNot a anagram");
    }
}

/*
Enter 2 Strings: listen silent
Anagram

Enter 2 Strings: Jack Jake
Not a anagram
*/