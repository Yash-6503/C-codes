/*
2.
Write a C program to check whether a Alphabet is vowel 
or consonant using Switch Case.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("\nEnter a Alphabet: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
        ch += 32;
    switch(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        case 1:
            printf("\nVowel");
            break;

        default: 
            printf("\nConsonant");
    }
}

/*
Enter a Alphabet: A
Vowel

Enter a Alphabet: M
Consonant
*/