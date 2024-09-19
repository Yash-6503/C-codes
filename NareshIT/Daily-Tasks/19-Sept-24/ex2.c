/*
Que 2 : C Program to Remove Characters in Second String 
which are present in First String.
--------
Sample input : apple
Sample input : aeroplane

Sample output as : ron
*/

#include<stdio.h>
void main()
{
    int i, j;
    char s1[100], s2[100];
    printf("\nEnter 2 Strings: ");
    scanf("%[^ ] %[^\n]", s1, s2);

    for(i=0; s1[i]!='\0'; i++)
    {
        for(j=0; s2[j]!='\0'; j++)
        {
            if(s1[i] == s2[j])
            {
                s2[j] = -1;
            }
        }
    }

    for(i=0; s2[i]!='\0'; i++)
    {
        if(s2[i]!=-1){
            printf("%c", s2[i]);
        }
    }
}

/*
Enter 2 Strings: apple aeroplane
ron

Enter 2 Strings: hello world
wrd
*/