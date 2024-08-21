/*
1.
Write a C program to accept id from user and display department.

Id: 11 to 15 is Software department

  16 to 20 is Developer department

  21 to 23 is Management department
*/

#include<stdio.h>
void main()
{
    int id;
    printf("\nEnter your Id: ");
    scanf("%d", &id);
    if(id > 10 && id < 16)
    {
        printf("\nSoftware Department");
    }
    else if(id > 15 && id < 21)
    {
        printf("\nDeveloper Department");
    }
    else if(id > 20 && id < 24)
    {
        printf("\nManagement Department");
    }
    else{
        printf("\nNo Department");
    }
}

/*
Enter your Id: 23
Management Department

Enter your Id: 20
Developer Department

Enter your Id: 15
Software Department

Enter your Id: 10
No Department
*/