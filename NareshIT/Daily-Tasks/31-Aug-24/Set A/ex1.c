/*
Write a c program to input any character and check whether the it is
alphabet , digit, special character.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("\nEnter a Character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("\nAlphabet");
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("\nDigit");
    }
    else{
        printf("\nSpecial character");
    }
}

/*
Enter a Character: a
Alphabet

Enter a Character: A
Alphabet

Enter a Character: 5
Digit

Enter a Character:
Special character
*/