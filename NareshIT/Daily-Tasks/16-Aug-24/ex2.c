/*
2.
Write a C program to input amount from user and print minimum number 
of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the 
amount. How to the minimum number of notes required for the given 
amount in C programming. Program to find minimum number of notes 
required for the given denomination. Logic to find minimum number 
of denomination for a given amount in C program

Input as :
Enter the amount: 1275

Output as :
Rs. 500 notes: 2
Rs. 100 notes: 2
Rs. 50 notes: 1
Rs. 20 notes: 1
Rs. 10 coins: 0
Rs. 5 coins: 1
Rs. 2 coins: 0
Rs. 1 coins: 0
*/

#include<stdio.h>
void main()
{
    int amount, a1, a2, a3, a4, a5, a6, a7, a8;
    printf("\nEnter Amount: ");
    scanf("%d", &amount);

    a1 = amount / 500;
    amount = amount % 500;
    a2 = amount / 100;
    amount = amount % 100;
    a3 = amount / 50;
    amount = amount % 50;
    a4 = amount / 20;
    amount = amount % 20;
    a5 = amount / 10;
    amount = amount % 10;
    a6 = amount / 5;
    amount = amount % 5;
    a7 = amount / 2;
    amount = amount % 2;
    a8 = amount / 1;
    amount = amount % 1;

    printf("\nRs. 500 notes: %d", a1);
    printf("\nRs. 100 notes: %d", a2);
    printf("\nRs. 50 notes: %d", a3);
    printf("\nRs. 20 notes: %d", a4);
    printf("\nRs. 10 coins: %d", a5);
    printf("\nRs. 5 coins: %d", a6);
    printf("\nRs. 2 coins: %d", a7);
    printf("\nRs. 1 coins: %d", a8);

}



/*
Enter Amount: 1275

Rs. 500 notes: 2
Rs. 100 notes: 2
Rs. 50 notes: 1
Rs. 20 notes: 1
Rs. 10 coins: 0
Rs. 5 coins: 1
Rs. 2 coins: 0
Rs. 1 coins: 0
*/

/*
Enter Amount: 199

Rs. 500 notes: 0
Rs. 100 notes: 1
Rs. 50 notes: 1
Rs. 20 notes: 2
Rs. 10 coins: 0
Rs. 5 coins: 1
Rs. 2 coins: 2
Rs. 1 coins: 0
*/