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
    
    login:
    printf("\nEnter a username: ");
    scanf("%s", user);
    printf("\nEnter a password: ");
    scanf("%s", pass);
    printf("\nEnter Captcha eLrYHW: ");
    scanf("%s", captcha);

    if(strcmp(user, username) == 0 && strcmp(pass, password) == 0 && strcmp(captcha, Captcha) == 0)
    {
        printf("\nWelcome to IRCTC.");
    }
    else
    {
        if(!strcmp(user, username) == 0 && !strcmp(pass, password) == 0 && !strcmp(captcha, Captcha) == 0)
        {
            printf("\nInvalid Credantials");
        }
        else if(!strcmp(user, username) == 0 && strcmp(captcha, Captcha)==0)
        {
            printf("\nInvalid username");
        }
        else if(!strcmp(pass, password) == 0 && strcmp(captcha, Captcha) == 0)
        {
            printf("\nInvalid password");
        }
        else if(!strcmp(user, username)==0 && !strcmp(captcha, Captcha)==0)
        {
            printf("\nInvalid Username and Captcha");
        }
        else if(!strcmp(pass, password)==0 && !strcmp(captcha, Captcha)==0)
        {
            printf("\nInvalid Password and Captcha");
        }
        else{
            printf("\nInvalid Captcha");
        }
        
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