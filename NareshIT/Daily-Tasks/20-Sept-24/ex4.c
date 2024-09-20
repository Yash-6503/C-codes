/*
Que 4 : Write a program in C to calculate the length 
of a string using a pointer.
-------

Sample input : NareshIt26

Sample output : The length of the given string NareshIt26 is : 10
*/

#include<stdio.h>
void main()
{
    int i, len;
    char s[100], *p;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);
    p=s;
    while(p[len] != '\0')
    {
        len++;
    }
    printf("\nThe length of the given string %s is : %d", p, len);
}

/*
Enter a String: NareshIt26
The length of the given string NareshIt26 is : 10

Enter a String: Hello World
The length of the given string Hello World is : 11
*/