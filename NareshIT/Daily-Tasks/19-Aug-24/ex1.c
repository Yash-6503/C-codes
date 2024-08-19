/*
1.
Title: Interactive Tea Stall Experience

Introduction:
Imagine strolling down a charming street, enticed by the inviting 
aroma of freshly brewed beverages.
You arrive at a cozy tea stall, greeted by a friendly attendant.
Prepare for an interactive journey through the Tea Stall Counter!

Scenario:
Welcome and Menu:
You enter the tea stall, warmly welcomed by the attendant:

Attendant: "Welcome to our Tea Stall Counter! Our menu:"
Tea --------------------- Rs. 10
Coffee ------------------ Rs. 20
Cold coffee ------------- Rs. 50
Exit

Attendant: "Choose by entering a number (1-4):"

[User enters choice]

Customize Order:
Based on your choice, the attendant guides you:
[If choice is 1:]

Attendant: "How many cups of refreshing tea?"

[If choice is 2:]

Attendant: "How many cups of aromatic coffee?"

[If choice is 3:]

Attendant: "How many cups of chilled cold coffee?"

[User enters quantity]

Total and Payment:
The attendant shares your order total and awaits payment:

Attendant: "Total for [quantity] cup(s): Rs. [total_price]."

Attendant: "Enter your payment amount: Rs."

[User enters amount_paid]

Attendant: "Change: Rs. [change]."

Continuation or Farewell:

Choose to explore more or conclude your visit:

Attendant: "Explore more or finalize? (Type 'Y' for Yes or 'N' for No):"

[User enters order_again]

[If user wants to continue:]

Attendant: "Certainly, let's explore."

[If user doesn't want to continue:]

Attendant: "Thank you for visiting! We look forward to serving you again soon!"
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int choice, qty;
    float bill=0, bill_paid;
    char confirm;

    menu:
    printf("\nWelcome to our Tea Stall Counter! \nOur menu:");
    printf("\n1. Tea Rs.10");
    printf("\n2. Coffee Rs.20");
    printf("\n3. Cold Coffee Rs.50");
    printf("\n4. Exit");
    printf("\nEnter your Choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1: 
            printf("\nEnter How many cups of refreshing tea?: ");
            scanf("%d", &qty);
            bill = bill + qty * 10;
            break;
        
        case 2:
            printf("\nEnter How many cups of aromatic coffee?: ");
            scanf("%d", &qty);
            bill = bill + qty * 20;
            break;

        case 3:
            printf("\nEnter How many cups of chilled cold coffee?: ");
            scanf("%d", &qty);
            bill = bill + qty * 50;
            break;

        case 4:
            exit(0);
            
        default:
            printf("\nInvalid Choice\n");
            goto menu;

    }

    printf("\nTotal for %d cup(s): Rs. %.2f.\n", qty, bill);

    pay:
    printf("\nEnter Amount to pay Bill: ");
    scanf("%f", &bill_paid);
    
    if(bill_paid > bill)
    {
        printf("\nYour Change is %.2f", bill_paid - bill);
        printf("\nBill Paid\n");
        bill = 0;
    }
    else if(bill_paid == bill)
    {
        printf("\nBill Paid");
        bill = 0;
    }
    else
    {
        printf("\nAmount paid is less Rs.%.2f than Bill Amount Rs.%.2f\n", bill_paid, bill);
        bill = 0;
        goto pay;
    }

    printf("\nExplore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
    scanf(" %c", &confirm);

    if(confirm == 'y' || confirm == 'Y')
    {
        printf("\nCertainly, let's explore.\n");
        goto menu;
    }
    else
    {
        printf("\nThank you for visiting!\n We look forward to serving you again soon!\n");
    }
}   


/*
Welcome to our Tea Stall Counter! 
Our menu:
1. Tea Rs.10
2. Coffee Rs.20
3. Cold Coffee Rs.50
4. Exit
Enter your Choice: 1

Enter How many cups of refreshing tea?: 1

Total for 1 cup(s): Rs. 10.00.

Enter Amount to pay Bill: 9 

Amount paid is less Rs.9.00 than Bill Amount Rs.10.00

Enter Amount to pay Bill: 10

Your Change is 10.00
Bill Paid

Explore more or finalize? (Type 'Y' for Yes or 'N' for No): y

Certainly, let's explore.

Welcome to our Tea Stall Counter! 
Our menu:
1. Tea Rs.10
2. Coffee Rs.20
3. Cold Coffee Rs.50
4. Exit
Enter your Choice: 3

Enter How many cups of chilled cold coffee?: 2

Total for 2 cup(s): Rs. 100.00.

Enter Amount to pay Bill: 100

Bill Paid
Explore more or finalize? (Type 'Y' for Yes or 'N' for No): y

Certainly, let's explore.

Welcome to our Tea Stall Counter! 
Our menu:
1. Tea Rs.10
2. Coffee Rs.20
3. Cold Coffee Rs.50
4. Exit
Enter your Choice: 2

Enter How many cups of aromatic coffee?: 3

Total for 3 cup(s): Rs. 60.00.

Enter Amount to pay Bill: 100

Your Change is 40.00
Bill Paid

Explore more or finalize? (Type 'Y' for Yes or 'N' for No): n

Thank you for visiting!
 We look forward to serving you again soon!
*/