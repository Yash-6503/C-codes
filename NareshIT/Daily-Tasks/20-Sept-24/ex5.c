/*
Que 5 : Write a program in C to count the number of 
vowels and consonants in a string using a pointer.
-------

Sample input : string

Sample output : 
Number of vowels : 1
Number of constant : 5
*/

#include<stdio.h>
void main()
{
    int c=0, v=0, i, len=0;
    char s[100], *p;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);
    p=s;
    while(p[len]!='\0'){
        len++;
    }

    for(i=0; i<len; i++)
    {
        if(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u' || p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U'){
            v++;
        }
        else if(p[i] >= '0' && p[i] <= '9')
        {
            continue;
        }
        else{
            c++;
        }
    }

    printf("\nNumber of vowels : %d", v);
    printf("\nNumber of constants : %d", c);
}

/*
Enter a String: String

Number of vowels : 1
Number of constants : 5
*/

/*
Enter a String: Hello12

Number of vowels : 2
Number of constants : 3
*/