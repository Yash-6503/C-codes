/*
Find vowels & consonants using predefined functions also
using switch statement
*/

#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);
    if(isupper(ch))
        ch = tolower(ch);

    if(isalpha(ch))
    {
        switch(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            case 1: 
                printf("\nVowel");
                break;
            default:
                printf("\nConsonant");
        }
    }
    else if(isdigit(ch))
    {
        printf("\nDigit");
    }
    else{
        printf("\nSpecial character");
    }
}

/*
Enter a character: A
Vowel

Enter a character: e
Vowel

Enter a character: M
Consonant

Enter a character: l
Consonant

Enter a character: 5
Digit

Enter a character: *
Special character
*/