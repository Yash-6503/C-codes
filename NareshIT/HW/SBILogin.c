/*
SBI Net Banking Login Example in C Language
*/

#include<stdio.h>
#include<string.h>
void main()
{
    char uname[10], pass[10], cap[10];
    char username[] = "Admin";
    char password[] = "Admin@123";
    char Captcha[] = "ABC12D";
    int count = 1;

    login:
    if(count <= 3)
    {
        printf("\nEnter Username: ");
        scanf("%s", uname);
        if(strcmp(uname, username) == 0)
        {
            printf("\nEnter Password: ");
            scanf("%s", pass);
            if(strcmp(pass, password) == 0)
            {
                printf("\nEnter Captcha ABC12D: ");
                scanf("%s", cap);
                if(strcmp(cap, Captcha) == 0)
                {
                    printf("\nWelcome Mr.%s to SBI Net Banking\n", username);
                }
                else
                {
                    printf("\nInvalid Captcha\n");
                    count++;
                    goto login;
                }
            }
            else
            {
                printf("\nInvalid Username or Password\n");
                count++;
                goto login;
            }
        }
        else
        {
            printf("\nInvalid Username\n");
            count++;
            goto login;
        }
    }
    else
    {
        printf("\nYou have Finished 3 Attempts\nYour Account has been Blocked for 24 Hours");
    }
}