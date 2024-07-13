//Write a C Program to Print Alphabets pyramid

#include<stdio.h>

int main()
{
    char i, j;
    for(i = 'A'; i <= 'Z'; i++)
    {
        for(j = 'A'; j <= i; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
}