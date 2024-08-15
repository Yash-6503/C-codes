/*
IRCTC Login page
*/

#include<stdio.h>
#include<string.h>
void main()
{
    char username[] = "Admin";
    char password[] = "Admin@123";
    char Captcha[] = "eLrYHW";
    char user[10];
    char pass[10];
    char captcha[10];
    int count = 1;
    
    login:
    printf("\n\nEnter a username: ");
    scanf("%s", user);
    printf("\nEnter a password: ");
    scanf("%s", pass);
    printf("\nEnter Captcha eLrYHW: ");
    scanf("%s", captcha);

    if(count < 3)
    {
        if(strcmp(user, username) == 0 && strcmp(pass, password) == 0 && strcmp(captcha, Captcha) == 0)
        {
            printf("\nWelcome to IRCTC.");
        }
        else
        {
            if(!strcmp(user, username) == 0 && !strcmp(pass, password) == 0 && !strcmp(captcha, Captcha) == 0)
            {
                printf("\nInvalid Credantials");
                count++;
                goto login;
            }
            else if(!strcmp(user, username) == 0 && strcmp(pass, password) == 0 && strcmp(captcha, Captcha)==0)
            {
                printf("\nInvalid username");
                count++;
                goto login;
            }
            else if(!strcmp(pass, password) == 0 && strcmp(user, username) == 0 && strcmp(captcha, Captcha) == 0)
            {
                printf("\nInvalid password");
                count++;
                goto login;
            }
            else if(!strcmp(user, username) == 0 && !strcmp(pass, password) == 0 && strcmp(captcha, Captcha) == 0)
            {
                printf("\nInvalid Username and Password");
                count++;
                goto login;
            }
            else if(!strcmp(user, username)==0 && !strcmp(captcha, Captcha)==0)
            {
                printf("\nInvalid Username and Captcha");
                count++;
                goto login;
            }
            else if(!strcmp(pass, password)==0 && !strcmp(captcha, Captcha)==0)
            {
                printf("\nInvalid Password and Captcha");
                count++;
                goto login;
            }
            else{
                printf("\nInvalid Captcha");
                count++;
                goto login;
            }

               
        }
    }
    else{
        printf("\nYou have Finished 3 Attempts\nSo please Login After 5 minutes.");
    }
}

/*
Enter a username: aaa
Enter a password: Admin@123
Enter Captcha eLrYHW: aa
Invalid Username and Captcha
*/

/*
Enter a username: Admin
Enter a password: aa
Enter Captcha eLrYHW: aaa
Invalid Password and Captcha
*/

/*
Enter a username: Admin@123
Enter a password: Admin
Enter Captcha eLrYHW: eLrYHW
Invalid Username and Password
*/

/*
Enter a username: aa
Enter a password: aa
Enter Captcha eLrYHW: aa
Invalid Credantials
*/

/*
Enter a username: aaaa
Enter a password: Admin@123
Enter Captcha eLrYHW: eLrYHW
Invalid username
*/

/*
Enter a username: Admin
Enter a password: aaa
Enter Captcha eLrYHW: eLrYHW
Invalid password
*/

/*
Enter a username: Admin
Enter a password: Admin@123
Enter Captcha eLrYHW: aafj
Invalid Captcha
*/

/*
Enter a username: Admin
Enter a password: Admin@123
Enter Captcha eLrYHW: eLrYHW
Welcome to IRCTC.
*/


/*
Enter a username: a
Enter a password: a
Enter Captcha eLrYHW: a

Invalid Credantials

Enter a username: b
Enter a password: b
Enter Captcha eLrYHW: b

Invalid Credantials

Enter a username: c
Enter a password: c
Enter Captcha eLrYHW: c

You have Finished 3 Attempts
So please Login After 5 minutes.
*/