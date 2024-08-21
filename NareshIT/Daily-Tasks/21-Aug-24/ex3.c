/*
3.
Develop below program using switch case)

Write a C program that will read a float and a character from console. 
The character could be d for deposit or w for withdrawal.
Starting with a Minimum balance of 2000.

*Ask the user to initialize the minimum balance and don't allow 0 and -ve 
values if it is 0 or -ve then print "Ammount Can't be stored".

*If the user want deposit operation then ask how much ammount he want to
 deposit and add that ammount with balance and print the balance.

*if the user want withdrwal operation then ask how much ammount he want 
to withdrwal and substract that ammount from the balance and print the balance.

[Note: If the deposit ammount is negetive or 0 print "Invalid ammount".
    If the withdrawl ammount is negetive , 0 or greater than balance then 
    print "Invalid ammount"]

Hints:
-------
Declare variables for the amount in float, balance in float and transaction 
code in char types.

Test the transaction code, if ‘d’ it is deposit. Test the ammount so that it
 is not negative.

If the balance is not negative or positive sum-up the balance.
balance = balance + amount;

Test the transaction code for withdrawal, ‘w’. If the transaction code is ‘w’
Minus the withdrawn amount to update the balance.
balance = balance - amount;

And print the balance.
*/

#include<stdio.h>
void main()
{
    float bal = 2000, deposit, withdrawal, amt;
    char choice;
    bank:
    printf("\nBanking Application");
    printf("\nD/d (Deposit)");
    printf("\nW/w (Withdrawl)");
    printf("\nEnter your Choice: ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case 'd' : case 'D':
            depo:
            printf("\nEnter amount to Deposit: ");
            scanf("%f", &deposit);
            if(deposit > 0)
            {
                bal += deposit;
                printf("\nAmount %.2f is deposited \nYour Balance is Rs.%.2f\n", deposit, bal);
            }else{
                printf("\nInvalid Amount\n");
                goto depo;
            }
            break;

        case 'w' : case 'W':
            withdw:
            printf("\nEnter amount to Withdraw: ");
            scanf("%f", &withdrawal);
            if(withdrawal > 0 && withdrawal <= bal)
            {
                bal -= withdrawal;
                printf("\nAmount %.2f is withdrawled \nYour Balance is Rs.%.2f\n", withdrawal, bal);
            }else{
                printf("\nInvalid Amount\n");
                goto withdw;
            }
            break;
        
        default:
            printf("\nInvalid Choice\n");
            goto bank;
    }

    if(bal < 2000)
    {
        pay:
        printf("\nPlease maintain minimum balance 2000");
        printf("\nEnter amount to add: ");
        scanf("%f", &amt);
        if(amt > 0 && bal+amt >= 2000)
        {
            printf("\nAmount %.2f is stored", amt);
            printf("\nYour Balance is Rs.%.2f", bal+amt);
        }
        else{
            printf("\nAmount cannot be stored\n");
            goto pay;
        }
    }
}

/*
Banking Application
D/d (Deposit)
W/w (Withdrawl)
Enter your Choice: W

Enter amount to Withdraw: 5000

Invalid Amount

Enter amount to Withdraw: 100

Amount 100.00 is withdrawled 
Your Balance is 1900.00

Please maintain minimum balance 2000
Enter amount to add: 10

Amount cannot be stored

Please maintain minimum balance 2000
Enter amount to add: 150

Amount 150.00 is stored
Your Balance is 2050.00
*/

/*
Banking Application
D/d (Deposit)
W/w (Withdrawl)
Enter your Choice: D

Enter amount to Deposit: 0

Invalid Amount

Enter amount to Deposit: -10

Invalid Amount

Enter amount to Deposit: 500

Amount 500.00 is deposited 
Your Balance is Rs.2500.00
*/