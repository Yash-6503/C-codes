/*
Que 5 : Write a c program to sort the String in Descending Order  ,after sorting print the result in string format?  

---------
Sample input :- CoreJava

Sample output :
Before sorting the array : CoreJava
After sorting the array : vroeaaJC
*/

#include<stdio.h>
void main()
{
    char s[20], temp[20];
    int i, j;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);
    printf("\nBefore sorting the array: %s", s);

    for (i = 0; i < s[i] - 2; i++)
    {
        for (j = 0; j < s[j] - 2; j++)
        {
            if(s[i] > s[j])
            {
                temp[i] = s[i];
                s[i] = s[j];
                s[j] = temp[i]; 
            }
        }
    }

    printf("\nAfter sorting the array : %s", s);
}