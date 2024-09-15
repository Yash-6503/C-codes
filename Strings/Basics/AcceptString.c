/*
Write a program to accept a string & display it.
*/

#include<stdio.h>
void main()
{
    char s[100];
    printf("\nEnter your name: ");
    scanf("%[^\n]", s);
    printf("\nHello %s!!", s);
}

/*
Enter your name: Narendera Modi

Hello Narendera Modi!!
*/