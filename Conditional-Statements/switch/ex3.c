/*
Finding a vowel or consonant using switch statements
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch < 'Z') 
        ch += 32;
    if(ch >= 'a' && ch <= 'z')
    {
        switch(ch)
        {
            case 'a': case 'e': case 'i': case  'o': case 'u': printf("\nVowel");
                break;
            
            default:
                printf("\nConsonant");
                break;
        }
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\nDigit");
    }
    else
    {
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