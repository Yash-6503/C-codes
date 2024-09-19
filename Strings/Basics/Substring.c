/*
Write a C program to find a palindromic substring
from a given string
*/

#include<stdio.h>
void main()
{
    char s[100];
    int i, j, k,c=0, len=0, si=0,ei=0,val=0;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    while(s[len]!='\0')
    {
        len++;
    }

    printf("\nPlaindromic substrings are: \n");
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(s[i] == s[j])
            {
                val = 1;
                si = i;
                ei = j;
                while(si < ei)
                {
                    if(s[si] != s[ei])
                    {
                        val = 0;
                        break;
                    }
                    si++;
                    ei--;
                }

                if(val)
                {
                    c++;
                    for(k=i; k<=j; k++)
                    {
                        printf("%c", s[k]);
                    }
                    printf("\n");
                }
            }
        }
    }
    printf("\nTotal palindromic substrings are: %d", c);

}

/*
Enter a String: madam

Plaindromic substrings are: 
madam
ada

Total palindromic substrings are: 2
*/