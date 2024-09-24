/*
Que 3 : Write a function to find the length of a given string (excluding the null character).
-------

-> create int main() function
-> create int getLength(char str[]) function. this function will return length of string
-> in main function read String and call the getLength fuction and print the output.

Sample input : Hello
Sample output: Length of the string: 5


Sample input : ThisIsALongString
Sample output: Length of the string: 17
*/

#include<stdio.h>
int getLength();

void main()
{
    printf("\nLength of the string : %d", getLength("ThisIsALongString"));
}

int getLength(char s[])
{
    int len=0;
    while(s[len] != '\0'){
        len++;
    }
    return len;
}

/*
hello
Length of the string : 5

ThisIsALongString
Length of the string : 17
*/