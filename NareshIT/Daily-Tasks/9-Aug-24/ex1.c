/*
1.Write a program that takes the total bill amount and the number of people from the user. 
Calculate and print the amount each person needs to pay, assuming an equal split of the bill.
Sample Input
Input :

-------

total bill( in float) ->1200.00

number of people(in int)-> 5
Sample Output
Output :

--------

amount each person needs to pay ->240
*/


#include<stdio.h>
void main()
{
    float totalbill, amount;
    int people;
    printf("\nEnter total bill: ");
    scanf("%f", &totalbill);
    printf("\nEnter no of peoples: ");
    scanf("%d", &people);
    amount = totalbill / people;
    printf("\namount each person needs to pay is %.2f", amount);
}


/* Output
Enter total bill: 2500
Enter no of peoples: 5
amount each person needs to pay is 500.00

Enter total bill: 5000
Enter no of peoples: 10
amount each person needs to pay is 500.00
*/