/*
Que 2 : Write a C program to find out the sum of the numbers
which is present in a given string.
--------
Sample input  : Enter a String : TS12ab345

Sample output  : Sum Of the numbers is : 15
*/

#include<stdio.h>
void main()
{
    int i, j, sum=0;
    char s[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]", s);

    printf("\nNumbers in the string are: ");
    for(i=0; s[i]!='\0'; i++)
    {
        if(!(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= 'a' && s[i] <= 'z'))
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                s[i]-=48;
            }
            sum += s[i];
            printf("%d", s[i]);
        }
    }
    printf("\nSum of the numbers = %d", sum);
}

/*
Enter a String: TS12ab345

Numbers in the string are: 12345
Sum of the numbers = 15
*/

/*
Enter a String: MH15eg4416

Numbers in the string are: 154416
Sum of the numbers = 21
*/