/*
Read a customer id, name, quantity purchased and rate of
item. Find amount, 35% discount and total.
*/

#include<stdio.h>
void main()
{
    int custID;
    char name[20];
    float qty, rate, discount, total, amount;
    printf("\nEnter customer Id: ");
    scanf("%d", &custID);
    printf("\nEnter Name: ");
    scanf("%s", name);
    printf("\nEnter product quantity: ");
    scanf("%f",&qty);
    printf("\nEnter rate of item: ");
    scanf("%f", &rate);
    printf("\nEnter Discount: ");
    scanf("%f", &discount);

    amount = rate * qty;
    total = amount / 100 * discount;
    
    printf("\nAmount is %.2f", amount);
    printf("\nTotal Amount is %.2f", total);
    printf("\nDiscount is %.2f", amount - total);
}


/* output
Enter customer Id: 1
Enter Name: yash
Enter product quantity: 2
Enter rate of item: 10
Enter Discount: 50

Amount is 20.00
Total Amount is 10.00
Discount is 10.00

========================================

Enter customer Id: 12
Enter Name: Harsh
Enter product quantity: 1
Enter rate of item: 100
Enter Discount: 35

Amount is 100.00
Total Amount is 35.00
Discount is 65.00
*/