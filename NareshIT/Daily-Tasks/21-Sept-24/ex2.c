/*
2.
Write a C program to remove all the white space from 
given String using pointer and function.
-------

Sample input : Welcome To Naresh IT
Sample output : WelcomeToNareshIT
*/

#include<stdio.h>
void main()
{
    int i;
    char s[100], *p;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);
    p=s;

    printf("\nAfter Removing white spaces from string: ");
    for(i=0; p[i]!='\0'; i++)
    {
        if(p[i] != ' ')
        {
            printf("%c", p[i]);
        }
    }
}

/*
Enter a String: Welcome To Naresh IT

After Removing white spaces from string: WelcomeToNareshIT
*/
