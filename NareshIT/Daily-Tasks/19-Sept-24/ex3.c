/*
Que 3 :  Write a program in C to find the frequency of 
characters.
--------
Sample input : This is a test string
Sample input : the character to find frequency: i

Sample  output : The frequency of 'i' is : 3 
*/

#include<stdio.h>
void main()
{
    int i, j, c;
    char s[100], ch;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    printf("\nEnter character to find frequency: ");
    scanf(" %c", &ch);

    for(i=0, c=0; s[i]!='\0'; i++)
    {
        if(s[i] == ch)
        {
            c++;
        }
    }
    printf("\nThe frequency of '%c' is : %d", ch, c);   
}

/*
Enter a String: This is a test string

Enter character to find frequency: i

The frequency of 'i' is : 3
*/