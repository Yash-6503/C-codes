/*
Write a C program to find the frequency of given 
character in a string.
*/

#include<stdio.h>
void main()
{
    int i, j, c;
    char s[100], ch;
    printf("\nEnter a string: ");
    scanf("%[^\n]", s);

    printf("\nEnter a character to find frequency: ");
    scanf(" %c", &ch);

    for(i=0, c=0; s[i] != '\0'; i++)
    {
        if(s[i] == ch)
        {
            c++;
        }
    }
    printf("\nFrequency of '%c' is : %d", ch, c);

}

/*
Enter a string: hello

Enter a character to find frequency: l

Frequency of 'l' is : 2
*/

/*
Enter a string: This is a c program

Enter a character to find frequency: i

Frequency of 'i' is : 2
*/