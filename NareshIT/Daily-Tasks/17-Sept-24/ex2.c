/*
2.
Write a C program to remove given character from a String.
--------
Sample input :
Enter a String : Bookstore
Enter the character you want to remove : o
output
Bkstre
*/

#include<stdio.h>
void main()
{
    char s[100], ch;
    int i, j, f;
    printf("\nEnter a String: ");
    scanf("%[^\n]",s);
    printf("\nEnter the character you want to remove: ");
    scanf(" %c", &ch);

    for(i=0, f=0; s[i]!='\0'; i++)
    {
        if(s[i] == ch){
            f=1;
            break;
        }
    }
    if(f==0){
        printf("\nCharacter %c not found \nPlease provide valid charater.", ch);
    }
    else{
       printf("\nAfter removing %c character string is: ", ch);
        for(i=0; s[i]!='\0';i++)
        {
            if(s[i] != ch)
            {
                printf("%c", s[i]);
            }
        }
    }
}

/*
Enter a String: Bookstore

Enter the character you want to remove: o

After removing o character string is: Bkstre
*/

/*
Enter a String: hello

Enter the character you want to remove: w

Character w not found 
Please provide valid charater.
*/