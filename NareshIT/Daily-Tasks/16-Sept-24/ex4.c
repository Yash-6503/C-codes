/*
Que 4 : Write a c program to sort the String in ascending order ,after sorting print the result in string format?
---------

Sample input :- CoreJava

Sample output :-
Before sorting the array : CoreJava
After sorting the array : CJaaeorv
*/

#include<stdio.h>
void main()
{
    int i, j;
    char s[100], temp[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    printf("\nBefore sorting the array : %s", s);
    for(i=0; i<s[i]-2; i++)
    {
        for(j=0; j<s[j]-i-2; j++)
        {
            if(s[i] < s[j])
            {
                temp[i] = s[i];
                s[i] = s[j];
                s[j] = temp[i];
            }
        }
    }

    printf("\nAfter sorting the array : %s", s);
}

/*
Enter a String: CoreJava

Before sorting the array : CoreJava
After sorting the array : CJaaeorv
*/
