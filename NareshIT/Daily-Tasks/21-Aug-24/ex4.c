/*
4.
Write a C program to take user Id as 1001 and Pasword as 1010. Ask the user to 
enter his id, if the id is valid then ask the user to enter his password ,
 if the password is correct then print the name of the user, otherwise 
 the program will print incorrect Passoword and if the Id doesnot exits, 
 the program will print Incorrect Id.

develop this program by using Switch case. 
*/

#include<stdio.h>
void main()
{
    int id=1001, pass=1010;
    int uid, upass;
    printf("\nEnter User Id: ");
    scanf("%d",&uid);
    switch(id == uid)
    {
        case 1:
            printf("\nEnter Password: ");
            scanf("%d", &upass);
            switch(pass == upass)
            {
                case 1:
                    printf("\nWelcome Yash");
                    break;
                default:
                    printf("\nIncorrect password");
            }
            break;
        
        default:
            printf("\nIncorrect User Id");
    }
}

/*
Enter Id: 1001

Enter Password: 1010

Welcome Yash
*/

/*
Enter Id: 1000

Incorrect Id
*/

/*
Enter Id: 1001

Enter Password: 1001

Incorrect password
*/