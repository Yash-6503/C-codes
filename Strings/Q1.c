// Write a C Program to Add or Concatenate Two Strings

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("\nEnter 1st String: ");
    scanf("%s", str1);
    printf("\nEnter 2nd String: ");
    scanf("%s", str2);
    strcat(str1,str2);
    printf("After Concating Two strings: %s\n", str1);
    return 0;
}