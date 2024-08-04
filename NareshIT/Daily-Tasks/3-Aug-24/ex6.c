/*
A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%.
Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged. 

Write a C program to Display total selling price, profit along with vat and service charge.
To calculate the selling price, profit, VAT, and service charge, follow these steps:

1) Calculate the selling price:

  Selling Price = Cost Price + Profit

  Selling Price = Rs. 3500 + (27% of Rs. 3500)


2) Calculate the profit:

  Profit = Selling Price - Cost Price


3) Calculate VAT:

  VAT = 12.7% of Selling Price


4) Calculate Service Charge:

  Service Charge = 3.87% of Selling Price

*/

#include<stdio.h>
void main()
{
    int costPrice = 3500;
    int profitPercent = 27;
    int sellingPrice;
    int profit;
    float VAT;
    float VATpercent = 12.7;
    float serviceCharges, servicePercent = 3.87;
 
    sellingPrice = (costPrice / 100) * profitPercent + costPrice;
    printf("\nSelling Price is %d", sellingPrice);

    profit = sellingPrice - costPrice;
    printf("\nProfit is %d", profit);

    VAT = (sellingPrice / 100) * VATpercent;
    printf("\nVAT on selling price is %f", VAT);

    serviceCharges = (sellingPrice / 100) * servicePercent;
    printf("\nService charges on selling price is %f", serviceCharges);
    printf("\n");
}

/* output
Selling Price is 4445
Profit is 945
VAT on selling price is 558.799988
Service charges on selling price is 170.279999
*/