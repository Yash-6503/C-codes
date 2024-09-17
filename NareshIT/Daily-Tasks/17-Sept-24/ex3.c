/*
3.
Write a C program to remove all the Spaces from a given String.

Sample Input
Black cat on a mat
Sample Output
Blackcatonamat
*/

#include<stdio.h>
void main()
{
    char s[100];
    int i, j;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    printf("\nAfter removing spaces string is: ");
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] != ' ')
        {
            printf("%c", s[i]);
        }
    }
}

/*
Enter a String: Black cat on a mat

After removing spaces string is: Blackcatonamat
*/