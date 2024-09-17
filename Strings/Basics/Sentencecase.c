/*
Write a Program to convert a string into senetence-case 
without using any predefined functions
*/

#include<stdio.h>
void main()
{
    char s[100];
    int i, j;

    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    for(i=0; s[i]!='0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]+=32;
        }
    }

    if(s[0] >= 'a' && s[0] <= 'z')
    {
        s[0]-=32;
    }

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] == '.' && s[i+1] == ' ' && s[i+2] >= 'a' && s[i+2] <= 'z')
        {
            s[i+2] -= 32;
        }
    }

    printf("\nSentence case string is : %s", s);
}

/*
Enter a String: nareSH it. ameeRpeT. hyDeraBAD

Sentence case string is : Naresh it. Ameerpet. Hyderabad
*/