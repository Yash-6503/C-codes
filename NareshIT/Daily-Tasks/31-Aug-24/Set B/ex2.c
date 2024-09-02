/*
Write a C program to input any alphabet  and check whether it is alphabet or consonant
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("\nAlphabet");
    }
    else{
        printf("\nConsonant");
    }
}

/*
Enter a character: @
Consonant

Enter a character: 3
Consonant

Enter a character: a
Alphabet

Enter a character: A
Alphabet
*/