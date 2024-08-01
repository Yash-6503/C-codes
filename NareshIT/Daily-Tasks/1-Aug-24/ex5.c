/* Write a C Program to calculate the selling price of a TV which 
cost price is 3000rs and profit is 15% print the selling price.*/

#include<stdio.h>
void main()
{
    int costP = 3000, sellingPrice;
    int profit = 15;
    sellingPrice = (costP / 100 * profit) + costP;
    printf("Selling Price = %d\n", sellingPrice);
    printf("Profit is %d\n", sellingPrice - costP);
}