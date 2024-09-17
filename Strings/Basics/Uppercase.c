/*
Write a C program to convert a string to uppercase
*/

#include<stdio.h>
void main()
{
    char s[100];
    int i, j;

    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    printf("\nUpper case string : ");
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i]-=32;
        }
        printf("%c", s[i]);
    }
}

/*
Enter a String: hello how are you bro?

Upper case string : HELLO HOW ARE YOU BRO?
*/