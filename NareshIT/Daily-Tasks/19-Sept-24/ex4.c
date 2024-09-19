/*
Que 4: Write a C program to find the repeated character
in a string.
--------
Sample input : 
welcome to Nareshit

Sample  output:  
The first repetitive character in Nareshit is: e
*/

#include<stdio.h>
void main()
{
    int i, j;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    for(i=0; s[i]!='\0';i++)
    {
        for(j=i+1; s[j]!='\0'; j++)   
        {
            if(s[i] == s[j])
            {
                printf("\nThe first repetitive character in Nareshit is: %c", s[i]);
                return;
            }
        }
    }
}

/*
Enter a String: welcome to nareshit
The first repetitive character in Nareshit is: e

Enter a String: hello world
The first repetitive character in Nareshit is: l
*/
