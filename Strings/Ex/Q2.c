// Write a C Program to Find the Length of a String

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\nEnter a String: ");
    scanf("%s", str);
    int length = strlen(str);
    printf("\nLength of String is %d\n", length);
    return 0;
}