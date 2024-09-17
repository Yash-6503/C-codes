/*
5.
Create a program that compresses a string by replacing 
repeated characters with a count of the repetition 
(e.g., "aaabbbcc" 	becomes "a3b3c2").
-------
Sample input : Enter a String : aaabbccdae

Sample output as : a4b2c2
Sample Input
aaabbccdae
Sample Output
a4b2c2
*/

#include<stdio.h>
void main()
{
    int i, j=0, k, c;
    char s[100], s2[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    for(i=0; s[i]!='\0'; i++)
    {
        s2[j++] = s[i];

        c = 1;

        while(s[i] == s[i+1]){
            c++;
            i++;
        }
        
        if(c > 1){
            s2[j++] = c+'0';
        }
    }

    s2[j] = '\0';

    printf("\nAfter replacing count of repeated numbers = %s", s2);
}

/*
Enter a String: aaabbccdae

After replacing count of repeated numbers = a3b2c2dae
*/