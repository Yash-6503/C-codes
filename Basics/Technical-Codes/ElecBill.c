/*
Electricity bill generation:
Read a consumer id, name, previous, present month
reading. Find the no of units and find the bill amount
using below table. 

NO OF UNITS                     UNIT PRICE
1-50                            1.45PAISA
51-100                          2.8
101-200                         3.05
201-300                         4.75
301-500                         6.00
>500                            6.25

*/


#include<stdio.h>
void main()
{
    int id, prev, curr, units;
    char name[20];
    float BillAmount;
    printf("\nEnter Customer ID: ");
    scanf("%d", &id);
    printf("\nEnter Customer Name: ");
    scanf("%s", name);
    printf("\nEnter Previous Reading: ");
    scanf("%d", &prev);
    printf("\nEnter Current Reading: ");
    scanf("%d", &curr);
    units = curr - prev;
    if(units <= 50)
    {
        BillAmount = units * 1.45;
    }
    else if(units <= 100)
    {
        BillAmount = 50 * 1.45 + (units - 50) * 2.8;
    }
    else if(units <= 200)
    {
        BillAmount = 50 * 1.45 + 50 * 2.8 + (units - 100) * 3.05;
    }
    else if(units <= 300)
    {
        BillAmount = 50 * 1.45 + 50 * 2.8 + 100 * 3.05 + (units - 200) * 4.75;
    }
    else if(units <= 500)
    {
        BillAmount = 50 * 1.45 + 50 * 2.8 + 100 * 3.05 + 100 * 4.75 + (units - 300) * 6;
    }
    else
    {
        BillAmount = 50 * 1.45 + 50 * 2.8 + 100 * 3.05 + 100 * 4.75 + 200 * 6 + (units - 500) * 6.25;
    }

    if(BillAmount < 50)
    {
        BillAmount = 50;
    }

    printf("\nBill Amount is %.2f", BillAmount);
}



/*
Enter Customer ID: 101

Enter Customer Name: yash

Enter Previous Reading: 0

Enter Current Reading: 580

Bill Amount is 2692.50
*/

/*
Enter Customer ID: 101

Enter Customer Name: yash

Enter Previous Reading: 0

Enter Current Reading: 80

Bill Amount is 156.50
*/