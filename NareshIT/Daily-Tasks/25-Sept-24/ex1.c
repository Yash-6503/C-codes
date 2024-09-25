/*
Que 1 : Write a C program to check if two strings are anagrams of each other or not using function.
------

-> create int main() function.
-> create bool isAnagram(char str1[],char str2[]) function. this function will take two string as input and will return true if both String are anagram otherwise will return false.
-> in main function read two Strings and pass it to isAnagram fuction by calling it and print the result.


Sample input:
             First string : listen
             Second string: silent

Sample output: The strings are anagrams.


Sample input:
             First string : hello
             Second string: world

Sample output: The strings are not anagrams.
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isAnagram();

void main()
{
    char s1[100], s2[100];
    printf("\nEnter first String: ");
    scanf("%[^\n]", s1);
    printf("\nEnter second String: ");
    scanf(" %[^\n]", s2);

    if(isAnagram(s1,s2) == 1){
        printf("\nThe strings are anagrams.");
    }else{
        printf("\nThe strings are not anagrams.");
    }
}

bool isAnagram(char * s1, char * s2)
{
    int len, i;
    int sum1=0, sum2=0;
    while(s1[len]!='\0'){
        len++;
    }

    if(strlen(s1) != strlen(s2))
    {
        return false;
    }
    else{
        for(i=0; i<strlen(s1); i++)
        {
            sum1 += s1[i];
            sum2 += s2[i];
        }
        if(sum1 == sum2){
            return true;
        }else{
            return false;
        }
    }
}

/*
Enter first String: listen

Enter second String: silent

The strings are anagrams.
*/

/*
Enter first String: hello

Enter second String: world

The strings are not anagrams
*/