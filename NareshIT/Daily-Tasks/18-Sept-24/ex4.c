/*
Que 4 : Write a C Program to Display All Characters Present 
in the Prime Position of a String.
---------

Sample input  : today is wednesday
Sample output  : da sdey
*/

#include<stdio.h>
void main()
{
    int i, j, c;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    printf("\nPrime position characters of string: ");
    for(i=2; s[i]!='\0'; i++)
    {
        c = 1;
        for(j=2; s[j]!='\0'; j++)
        {
            if(i % j == 0)
            {
                c++;
            }
        }

        if(c==2){
            printf("%c", s[i]);
        }
    }
}


/*
Enter a String: today is wednesday

Prime position characters of string: da sdey
*/