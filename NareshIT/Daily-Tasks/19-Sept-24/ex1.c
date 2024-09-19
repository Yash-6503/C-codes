/*
Que 1 : Write a program to find and count all palindromicrome substrings in a given string.
--------
Sample input : Enter a String : madam

Sample output   :  Palindromic substring : madam
		   Palindromic substring : ada
		   Total palindromic substrings are : 2
*/


#include<stdio.h>
void main()
{
    int i, j, k, c=0, si=0, ei=0, len=0, val=0;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    //find string length using while loop
    while(s[len] != '\0'){
        len++;
    }

    //find the palindromic substrings using for loop
    printf("\nPalindromic substrings are: \n");
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(s[i] == s[j])
            {
                val=1;
                si=i;
                ei=j;
                while(si<ei){
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

Palindromic substrings are: 
madam
ada

Total palindromic substrings are: 2
*/