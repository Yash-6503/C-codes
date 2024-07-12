// Write a C Program to Check Whether a Character is Vowel or Consonant 

#include<stdio.h>

void main()
{
    char a;
    printf("\nEnter a Character: ");
    scanf("%c",&a);
    if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("\nCharacter is a Vowel");
    }
    else{
        printf("\nCharacter is a Consonant");
    }
}