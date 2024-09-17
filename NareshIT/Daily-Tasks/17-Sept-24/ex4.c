/*
4.
Write a C program to convert all the character to upper case from a given index to end index. If the given index is not available then print Index is not available.
-------
Sample input  :
Enter a String : I am a student
Enter the starting index number : 4
Enter the ending index number : 13

Sample  output : I am A STUDENT
*/

#include<stdio.h>
void main()
{
    char s[100];
    int i, j, start, end;
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    printf("\nEnter starting index number: ");
    scanf("%d", &start);
    printf("\nEnter ending index number: ");
    scanf("%d", &end);

    printf("\nAfter converting characters to uppercase: ");
    for(i=0; s[i]!='\0'; i++)
    {
        for(j=start; j<=end; j++)
        {
            if(s[j] >= 'a' && s[j] <= 'z'){
                s[j]-=32;
            }
        }
        printf("%c", s[i]);
    }
}

/*
Enter a String: I am a student

Enter starting index number: 4

Enter ending index number: 13

After converting characters to uppercase: I am A STUDENT
*/