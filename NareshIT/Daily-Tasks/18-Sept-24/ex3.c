/*
Que 3 : Write a C program to convert each word first alphabet to Upper case.
--------
Sample input  : Enter a String : i am a student of nareshit

Sample output  : Sum Of the numbers is : I Am A Student Of Nareshit
*/

#include<stdio.h>
void main()
{
    int i, j;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);
    for(i=0; s[i] != '\0'; i++)
    {
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0]-=32;
        }

        if(s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z')
        {
            s[i+1] -= 32;
        }
        
    }
    printf("string = %s", s);
}

/*
Enter a String: i am a student of nareshit
string = I Am A Student Of Nareshit
*/