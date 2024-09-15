/*
Write a program to find the number of words in given
sentence.
*/

#include<stdio.h>
void main()
{
    int i, w=1;
    char s[100];
    printf("\nEnter a Sentence: ");
    scanf("%[^\n]", s);
    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ' && s[i+1] != ' ')
        {
            w++;
        }
    }

    if(s[0] == ' '){
        w--;
    }

    if(s[i-1] == ' '){
        w--;
    }

    if(s[0] == '\0'){
        w--;
    }

    printf("\nNumber of words = %d", w);
}

/*
Enter a Sentence:    hello   world  
Number of words = 2

Enter a Sentence: Hey How are you?
Number of words = 4
*/