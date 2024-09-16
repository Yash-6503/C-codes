/*
Que 3 : Write a c program to print all the frequency of character present in string .
--------
Sample input: String s=" Hello Everyone"

Sample output  :-
The frequency of H is 1
The frequency of e is 3
The frequency of l is 2
The frequency of o is 2
The frequency of   is 1  --------THIS IS FOP CHECKING THE SPACE COUNT 
The frequency of E is 1
The frequency of v is 1
The frequency of r is 1
The frequency of y is 1
The frequency of n is 1
*/

#include<stdio.h>
void main()
{
    char s[100];
    int i, j, c;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    // for(i=0; s[i] != '\0'; i++)
    // {
    //     for(j=0, c=0; s[j] != '\0'; j++)
    //     {
    //         if(s[i] == s[j])
    //         {
    //             c++;
    //         }
    //     }
    //     printf("\nThe Frquency of %c is %d", s[i], c);
    // }

    
    
    int freq[256] = {0};  // Array to store the frequency of characters
    i = 0;

    // Calculating frequency of each character
    while (s[i] != '\0') {
        freq[(int)s[i]]++;
        i++;
    }

    // Printing the frequency of each character
  
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i == ' ') {
                printf("The frequency of space is %d\n", freq[i]);
            } else {
                printf("The frequency of %c is %d\n", i, freq[i]);
            }
        }
    }
    
}



