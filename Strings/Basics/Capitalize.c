#include<stdio.h>
void main()
{
    char s[100];
    int i, w=1;

    printf("\nEnter a Sentence: ");
    scanf("%[^\n]", s);
    
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }

        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0] -= 32;
        }
    }

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z')
            s[i+1] -= 32;
    }

    printf("\n String = %s", s);
}

/*
Enter a Sentence:   hello worlD

String =   Hello World
*/