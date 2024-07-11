// Write a C Program to Print Alphabets From A to Z Using Loop

#include<stdio.h>

int main()
{
    char a;
    printf("\nCharacters between A to Z are: \n");
    for(a = 'A'; a <= 'Z'; a++)
    {
        printf("%c ", a);
    }
    return 0;
}