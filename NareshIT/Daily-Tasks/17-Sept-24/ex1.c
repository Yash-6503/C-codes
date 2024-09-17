/*
1.
Write a C program to combine two string in a single String.
---------
Sample input :
Enter first String : Naresh
Enter Second String : it
output:
Nareshit
*/

#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100], s2[100], s3[200];
    int i=0, j=0;
    printf("\nEnter 2 Strings: ");
    scanf("%[^ ] %[^\n]", s1, s2);

    //using for-loop
    for(i=0; s1[i]!='\0'; i++)
    {
        s3[i] = s1[i];
    }

    for(j=0; s2[j] != '\0'; j++)
    {
        s3[i] = s2[j];
        i++;
    }

    /* //using while loop
    while(s1[i]!='\0'){
        s3[i] = s1[i];
        i++;
    }

    while(s2[j]!='\0'){
        s3[i] = s2[j];
        i++;
        j++;
    }
    */

    s3[i] = '\0';
    
    printf("\nAfter Combining 2 strings : %s", s3);
}

/*
Enter 2 Strings: Naresh it
After Combining 2 strings : Nareshit

Enter 2 Strings: Hello World
After Combining 2 strings : HelloWorld
*/