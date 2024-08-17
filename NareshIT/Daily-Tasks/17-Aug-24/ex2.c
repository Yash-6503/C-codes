/*
2.
Write a C program for a service center by following given Rules and Guide lines.

* This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler .
 If any other vehicle came to you , you have to show a message that 
 "this service center is not accepting other than 2 wheeler, 3 wheeler 
 and 4 wheeler".

* If the vehicle is 2 ,3 & 4 only then you have to ask the user what is 
the age of the vehicle.

* If the age your vehicle is above 8 months then only accept the service center 
otherwise you have to show a message that "your vehicle servie will done after 
a while".

* If the vehicle age is greater than 8 months then show options to 
the user on the console.

* Options:
1)Enter 1 for tyre problem
2)Enter 2 for fuel problem
3)Enter 3 for engine issue
4)Enter 4 for general services

* If the user enter 1 as input so it is tyre problem statement so you have 
to show a message "how many tyres you are facing the issue ?", 
based on the issue on the no of tyres, generate the bill.

* For example tyre cost Rs. 400 , if the user providing 3 tyre then the 
bill should be generated as Rs. 1200 in below format.

Name of the owener
Name of the bike
Issue
Bill

* For fuels problem cost is Rs.1500
* For engine issue cost is Rs.5000
* For general servicing cost is Rs.1000
And generate the bill in the above format.
*/

#include<stdio.h>
void main()
{
    int tyres, age, choice, tryeIssue;
    char name[20], vehicle[20];
    float Bill;

    printf("\nEnter how many tyres your vehicle contains: ");
    scanf("%d", &tyres);

    if(tyres == 2 || tyres == 3 || tyres == 4)
    {
        printf("\nEnter Age of your Vehicle: ");
        scanf("%d", &age);

        if(age >= 8)
        {
            printf("\nEnter Vehicle Owner Name: ");
            scanf("%s", name);
            printf("\nEnter Vehicle Name: ");
            scanf("%s", vehicle);

            ch:
            printf("\nEnter 1 for tyre problem");
            printf("\nEnter 2 for fuel problem");
            printf("\nEnter 3 for engine issue");
            printf("\nEnter 4 for general services");
            printf("\nEnter your Choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("\nEnter How many tyres you are facing the issue: ");
                    scanf("%d", &tryeIssue);
                    Bill = tryeIssue * 400;
                    printf("\nName of Owner is %s", name);
                    printf("\nName of Vehicle is %s", vehicle);
                    printf("\nIssue is Tyre Problem");
                    printf("\nBill Amount is %.2f", Bill);
                    break;

                case 2:
                    Bill = 1500;
                    printf("\nName of Owner is %s", name);
                    printf("\nName of Vehicle is %s", vehicle);
                    printf("\nIssue is Fuel Problem");
                    printf("\nBill Amount is %.2f", Bill);
                    break;

                case 3:
                    Bill = 5000;
                    printf("\nName of Owner is %s", name);
                    printf("\nName of Vehicle is %s", vehicle);
                    printf("\nIssue is Engine Problem");
                    printf("\nBill Amount is %.2f", Bill);
                    break;

                case 4:
                    Bill = 1000;
                    printf("\nName of Owner is %s", name);
                    printf("\nName of Vehicle is %s", vehicle);
                    printf("\nIssue is General Servicing");
                    printf("\nBill Amount is %.2f", Bill);
                    break;

                default:
                    printf("\nInvalid Choice\n");
                    goto ch;
                    break;
            }
        }
        else
        {
            printf("\nYour vehicle servie will done after a while");
        }
    }
    else
    {
        printf("\nThis service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
    }
}

/*
Enter how many tyres your vehicle contains: 2

Enter Age of your Vehicle: 8

Enter Vehicle Owner Name: Yash_Walke

Enter Vehicle Name: Bullet

Enter 1 for tyre problem: 
Enter 2 for fuel problem: 
Enter 3 for engine issue: 
Enter 4 for general services: 
Enter your Choice: 1

Enter How many tyres you are facing the issue: 2

Name of Owner is Yash_Walke
Name of Vehicle is Bullet
Issue is Tyre Problem
Bill Amount is 800.00
*/

/*
Enter how many tyres your vehicle contains: 2

Enter Age of your Vehicle: 8

Enter Vehicle Owner Name: Yash_Walke

Enter Vehicle Name: Bullet

Enter 1 for tyre problem
Enter 2 for fuel problem
Enter 3 for engine issue
Enter 4 for general services
Enter your Choice: 5

Invalid Choice
Enter 1 for tyre problem
Enter 2 for fuel problem
Enter 3 for engine issue
Enter 4 for general services
Enter your Choice: 2

Name of Owner is Yash_Walke
Name of Vehicle is Bullet
Issue is Fuel Problem
Bill Amount is 1500.00
*/