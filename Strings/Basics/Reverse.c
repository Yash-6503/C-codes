/*
Write a C program to reverse a given string using
while loop & for loop
*/

#include<stdio.h>
void main()
{
    int i, j, len=0;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    //find the string length
    // while(s[len] != '\0'){
    //     len++;
    // }

    //finding string length using a for loop
    for(i=0; s[i]!='\0';i++)
    {
        len++;
    }

    //finding reverse of string using for loop
    // printf("\nReverse of %s is: ", s);
    // for(i=len-1; i>=0; i--) 
    // {
    //     printf("%c", s[i]);
    // }

    //finding reverse of string using a while loop
    i=len-1;
    j=0;
    printf("\nReverse of %s is: ", s);
    while(i>=j)
    {
        printf("%c", s[i]);
        i--;
    }
}


/*
Enter a String: hello
Reverse of hello is: olleh
*/