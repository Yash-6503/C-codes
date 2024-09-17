/*
Write a C program to convert a string into lowercase
without using predefined functions
*/

#include<stdio.h>
void main()
{
    int i, j;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);
    printf("\nLowercase String is: ");
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i]+=32;
        }

        printf("%c", s[i]);
    }
}

/*
Enter a String: Hello HOW arE yOU BRO?

Lowercase String is: hello how are you bro?
*/