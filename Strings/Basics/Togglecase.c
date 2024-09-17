/*
Write a C program to convert a string into Togglecase
without using any predefined functions
*/

#include<stdio.h>
void main()
{
    char s[100];
    int i, j;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i]-=32;
        }
    }
    
    if(s[0] >= 'A' && s[0] <= 'Z')
    {
        s[0]+=32;
    }

    printf("\nTogglecase String is: ");
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] == ' ' && s[i+1] >= 'A' && s[i+1] <= 'Z')
        {
            s[i+1]+=32;
        }

        printf("%c", s[i]);
    }   
}

/*
Enter a String: Hello HOW Are YoU BRO?

Togglecase String is: hELLO hOW aRE yOU bRO?
*/