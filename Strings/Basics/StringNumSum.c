/*
Write a C program to find out the sum of the numbers
which is present in a given string.
*/

#include<stdio.h>
void main()
{
    int i, j, len=0, sum=0;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    //string length
    while(s[len]!='\0'){
        len++;
    }

    printf("\nNumbers in string are: ");
    for(i=0; i<len; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            printf("%c", s[i]);
            s[i] -= 48;
            sum += s[i];
        }
    }
    printf("\nSum of the numbers in string : %d", sum);
}

/*
Enter a String: TS12ab345

Numbers in string are: 12345

Sum of the numbers in string : 15
*/