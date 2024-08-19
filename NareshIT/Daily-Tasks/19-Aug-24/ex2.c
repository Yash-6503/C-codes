/*
2.
You are developing a ticket pricing system for a theme park. 
Write a program that takes the following inputs from a customer:

Age (integer)
Height in centimeters (float)
Whether the customer has a VIP pass (y or n)

The program should calculate the ticket price based on the following rules:
Children under 3 years old (inclusive) get in for free.
Children aged 4 to 12 (inclusive) pay Rs.20.
Adults aged 13 to 64 (inclusive) pay Rs.100.
Seniors aged 65 and above pay Rs.50.
However, there are some additional considerations based on height:


If the customer is above 180 cm in height, they pay an extra 50.
If the customer is between 120 cm (inclusive) and 180 cm (inclusive), 
no additional charge applies.
If the customer is below 120 cm, they receive a 50% discount on the base
ticket price.
If the customer has a VIP pass, they get a 10% discount on the final ticket price.

Write a program that implements these pricing rules and provides the following output:
The customer's age, height, and VIP pass status.
The calculated base ticket price before any discounts or additional charges.
Any discounts or additional charges applied based on height.
The final ticket price after applying all discounts and charges.
Additionally, if the customer's age is below 0 or height is negative, 
the program should provide an error message.
*/


#include<stdio.h>
void main()
{
    int age;
    float height, ticket, Final, extra;
    char vip;
    
    age:
    printf("\nEnter Age: ");
    scanf("%d", &age);
    printf("\nEnter Height in centimeters: ");
    scanf("%f", &height);
    printf("\nEnter (Y / y) if you have Vip pass othrewise enter (N / n): ");
    scanf(" %c", &vip);

    
    if(age <= 0)
    {
        printf("\nInvalid age\n");
        goto age;
    }
    else if(age <= 3 && age >= 1)
    {
        printf("\nFree Entry");
        ticket = 0;
    }
    else if(age >= 4 && age <= 12)
    {
        ticket = 20;
    }
    else if(age >= 13 && age <= 64)
    {
        if(height >= 180)
        {
            ticket = 100;
            extra = 50;
        }
        else if(height <= 120)
        {
            ticket = 100;
            extra = ticket - (ticket / 100) * 50;
        }
        else
        {
            ticket = 100;
        }
    }
    else
    {
        ticket = 50;
    }


    if(vip == 'y' || vip == 'Y')
    {
        if(height <= 120)
        {
            Final =  ticket - extra - ((ticket - extra) * 10 / 100);
        }
        else
        {
            Final = ticket + extra - ((ticket + extra) * 10 / 100);
        }
    }
    else
    {
        if(height <= 120)
        {
            Final = ticket - extra;
        }
        else
        {
            Final = ticket + extra;
        }
    }

    printf("\nCustomers Age : %d", age);
    printf("\nCustomers Height : %.2f", height);
    printf("\nVip Pass Status : %c", vip);
    printf("\nBase Ticket Price : %.2f", ticket);
    printf("\nExtra Charges / Discount applied on height: %.2f", extra);
    printf("\nFinal Ticket Price with 10%% Discount: %.2f\n", Final);
}

/*
Enter Age: 10

Enter Height in centimeters: 60

Enter (Y / y) if you have Vip pass othrewise enter (N / n): y

Customers Age : 10
Customers Height : 60.00
Vip Pass Status : y
Base Ticket Price : 20.00
Extra Charges / Discount applied on height: 0.00
Final Ticket Price with 10% Discount: 18.00
*/

/*
Enter Age: 20

Enter Height in centimeters: 200

Enter (Y / y) if you have Vip pass othrewise enter (N / n): y

Customers Age : 20
Customers Height : 200.00
Vip Pass Status : y
Base Ticket Price : 100.00
Extra Charges / Discount applied on height: 50.00
Final Ticket Price with 10% Discount: 135.00
*/

/*
Enter Age: 20

Enter Height in centimeters: 200

Enter (Y / y) if you have Vip pass othrewise enter (N / n): n

Customers Age : 20
Customers Height : 200.00
Vip Pass Status : n
Base Ticket Price : 100.00
Extra Charges / Discount applied on height: 50.00
Final Ticket Price with 10% Discount: 150.00
*/

/*
Enter Age: 20

Enter Height in centimeters: 100

Enter (Y / y) if you have Vip pass othrewise enter (N / n): y

Customers Age : 20
Customers Height : 100.00
Vip Pass Status : y
Base Ticket Price : 100.00
Extra Charges / Discount applied on height: 50.00
Final Ticket Price with 10% Discount: 45.00
*/

/*

Enter Age: 2

Enter Height in centimeters: 10

Enter (Y / y) if you have Vip pass othrewise enter (N / n): n

Free Entry
Customers Age : 2
Customers Height : 10.00
Vip Pass Status : n
Base Ticket Price : 0.00
Extra Charges / Discount applied on height: 0.00
Final Ticket Price with 10% Discount: -0.00
*/

/*
Enter Age: 70

Enter Height in centimeters: 150

Enter (Y / y) if you have Vip pass othrewise enter (N / n): n

Customers Age : 70
Customers Height : 150.00
Vip Pass Status : n
Base Ticket Price : 50.00
Extra Charges / Discount applied on height: 0.00
Final Ticket Price with 10% Discount: 50.00
*/

/*
Enter Age: 0

Enter Height in centimeters: 1

Enter (Y / y) if you have Vip pass othrewise enter (N / n): n

Enter Valid age

Enter Age: -1

Enter Height in centimeters: 10

Enter (Y / y) if you have Vip pass othrewise enter (N / n): n

Enter Valid age

Enter Age: 1

Enter Height in centimeters: 11

Enter (Y / y) if you have Vip pass othrewise enter (N / n): n

Free Entry
Customers Age : 1
Customers Height : 11.00
Vip Pass Status : n
Base Ticket Price : 0.00
Extra Charges / Discount applied on height: 0.00
Final Ticket Price with 10% Discount: -0.00
*/