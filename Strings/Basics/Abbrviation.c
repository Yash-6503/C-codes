/*
Write a Program to find abbrviation of the string
ex. Chennai Super Kings ==> CSK
*/

#include<stdio.h>
void main()
{
    int i,j;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    printf("\nAbbrviation string is: ");
    if(s[0] != ' ')
    {
        printf("%c",s[0]);
    }

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] == ' ' && s[i+1] != ' ')
        {
            printf("%c", s[i+1]);
        }
    }
}

/*
Enter a String: Chennai Super Kings

Abbrviation string is: CSK
*/