/*
This is a C program project based on Strings topic.
It is a menu-driven program containing multiple operations
as per user requirements.

MADE BY - DEV.YASH_WALKE ANY QUERY THEN CONTACT-9067973585
*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, ch;
    char s[100], p[100]={0};
   
    /*
    use do-while loop in case if you want to check multiple
    operations at a time otherwise check one by one with same
    code.
    */

    printf("\n--------------------------------");
    printf("\nString Operations Project");
    printf("\n--------------------------------");
    printf("\n1.String Length");
    printf("\n2.String Reverse");
    printf("\n3.Convert into Lowercase");
    printf("\n4.Convert into Uppercase");
    printf("\n5.Convert into Capitalize");
    printf("\n6.Convert into Sentence case");
    printf("\n7.Convert into Toggle case");
    printf("\n8.Find Abbrviation");
    printf("\n9.Find Frequency of character");
    printf("\n10.Find Words in a string");
    printf("\n11.String numbers Sum");
    printf("\n12.Check Palindrome");
    printf("\n13.Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    printf("\nEnter a String: ");
    scanf(" %[^\n]", s);
    for(i=0; s[i] != '\0'; i++){
        p[i] = s[i];
    }
    switch (ch)
    {
        case 1:
            printf("\nString %s length is %d\n", s, length(s));
            break;

        case 2:
            strReverse(s);
            break;

        case 3:
            Lower(s);
            break;

        case 4:
            Upper(s);
            break;

        case 5:
            Capitalize(s);
            break;

        case 6:
            SentenceCase(s);
            break;

        case 7:
            ToggleCase(s);
            break;

        case 8:
            printf("\nAbbrviation of %s is : ", p);
            Abbrviation(s,p);
            break;

        case 9:
            Frequency(s);
            break;

        case 10:
            printf("\nString %s contains %d words\n", s, Words(s));
            break;

        case 11:
            printf("\nString %s numbers Sum : %d\n", p, NumbersSum(s));
            break;

        case 12:
            CheckPalindrome(s);
            break;

        case 13: 
            exit(0);

        default:
            printf("\nInvalid Choice\n");
    }
    printf("--------------------------------\n");
}

int length(char *s)
{
    int l = 0;
    while (s[l] != '\0')
    {
        l++;
    }
    return l;
}

void strReverse(char *s)
{
    int i, len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    printf("\nString %s ", s);
    printf("Reverse is : ");
    for (i = len; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

void Lower(char *s)
{
    int i;
    printf("\nConverting %s to lower: ", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        printf("%c", s[i]);
    }
    printf("\n");
}

void Upper(char *s)
{
    int i;
    printf("\nConverting %s to Upper: ", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        printf("%c", s[i]);
    }
    printf("\n");
}

void Capitalize(char *s)
{
    int i;
    printf("\nConverting %s to Capitalize: ", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }

        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] -= 32;
        }
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
        {
            s[i + 1] -= 32;
        }
    }
    printf("%s\n", s);
}

void SentenceCase(char * s)
{
    int i;
    printf("\nConverting %s to Sentence case: ", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }

        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] -= 32;
        }
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.' && s[i + 1] == ' ' && s[i + 2] >= 'a' && s[i + 2] <= 'z')
        {
            s[i + 2] -= 32;
        }
    }
    printf("%s\n", s);
}

void ToggleCase(char * s)
{
    int i;
    printf("\nConverting %s to Togglecase: ", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }

        if (s[0] >= 'A' && s[0] <= 'Z')
        {
            s[0] += 32;
        }
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] >= 'A' && s[i + 1] <= 'Z')
        {
            s[i + 1] += 32;
        }
    }
    printf("%s\n", s);
}

void Abbrviation(char * s)
{
    int i;
    if (s[0] != ' ')
    {
        printf("%c", s[0]);
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            printf("%c", s[i + 1]);
        }
    }
    printf("\n");
}

void Frequency(char * s)
{
    char ch;
    int i, c = 0;
    printf("\nEnter a character to find its frequency: ");
    scanf(" %c", &ch);
    printf("\n%c",ch);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ch)
        {
            c++;
        }
    }
    if (ch > 0)
    {
        printf("\nIn String %s frequency of %c is : %d\n", s, ch, c);
    }
    else
    {
        printf("\nIn String %s character %c not found\n", s, ch);
    }
}

int Words(char * s)
{
    int i, w = 1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            w++;
        }
    }
    if (s[0] == ' ')
    {
        w--;
    }

    if (s[i - 1] == ' ')
    {
        w--;
    }

    if (s[0] == '\0')
    {
        w--;
    }
    return w;
}

int NumbersSum(char * s)
{
    int i, sum = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            s[i] -= 48;
            sum += s[i];
        }
    }
    return sum;
}

void CheckPalindrome(char * s)
{
    int i, j, len=0;
    while(s[len]!='\0'){len++;}
    i=0;
    j=len-1;
    printf("\nString %s is ", s);
    while(i<=j)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }

        if(s[j] >= 'A' && s[j] <= 'Z')
        {
            s[j] += 32;
        }

        if(s[i] != s[j])
        {
            printf("not a Palindrome\n");
            return;
        }else{
            i++;
            j--;
        }
    }
    printf("Palindrome\n");
}

/*
MADE BY - DEV.YASH_WALKE ANY QUERY THEN CONTACT-9067973585
*/