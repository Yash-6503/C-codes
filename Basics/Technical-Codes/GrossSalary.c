/*
READ SALESMAN SALES AMOUNT AND FIND THE GROSS
SALARY USING BELOW TABLE. 

SALES >=200000              SALES>=150000           SALES<100000

BASIC=10000                  BASIC=10000            BASIC=10000

DA=65.5%OF                   DA=65.5%OF             DA=65.5%OF
BASIC                        BASIC                  BASIC

BONUS=10000                  BONUS=5000             BONUS=2000

COMM=10%OF                   COMM=7.5%OF            COMM=5%OF
SALES                        SALES                  SALES

            GROSS = BASIC + DA + BONUS + COMMISSION
*/


#include<stdio.h>
void main()
{
    long SalesAmount, BasicSal = 10000, Bonus;
    float Gross, Comm, DA = (BasicSal/100)*65.5;
    printf("\nEnter a Sales Amount: ");
    scanf("%ld", &SalesAmount);

    if(SalesAmount <= 100000)
    {
        Bonus = 2000;
        Comm = (SalesAmount/100) * 5;
        Gross = BasicSal + DA + Bonus + Comm;
        printf("\nBasic Salary is %ld", BasicSal);
        printf("\nDA is %f", DA);
        printf("\nBonus is %ld", Bonus);
        printf("\nCommission is %.2f", Comm);
        printf("\nGross Salary is %.2f", Gross);
    }
    else if(SalesAmount >= 150000 && SalesAmount < 200000)
    {
        Bonus = 5000;
        Comm = (SalesAmount/100) * 7.5;
        Gross = BasicSal + DA + Bonus + Comm;
        printf("\nBasic Salary is %ld", BasicSal);
        printf("\nDA is %f", DA);
        printf("\nBonus is %ld", Bonus);
        printf("\nCommission is %.2f", Comm);
        printf("\nGross Salary is %.2f", Gross);
    }
    else
    {
        Bonus = 10000;
        Comm = (SalesAmount/100) * 10;
        Gross = BasicSal + DA + Bonus + Comm;
        printf("\nBasic Salary is %ld", BasicSal);
        printf("\nDA is %f", DA);
        printf("\nBonus is %ld", Bonus);
        printf("\nCommission is %.2f", Comm);
        printf("\nGross Salary is %.2f", Gross);
    }
}


/*
Enter a Sales Amount: 100000

Basic Salary is 10000
DA is 6550.000000
Bonus is 2000
Commission is 5000.00
Gross Salary is 23550.00
*/

/*
Enter a Sales Amount: 150000

Basic Salary is 10000
DA is 6550.000000
Bonus is 5000
Commission is 11250.00
Gross Salary is 32800.00
*/

/*
Enter a Sales Amount: 200000

Basic Salary is 10000
DA is 6550.000000
Bonus is 10000
Commission is 20000.00
Gross Salary is 46550.00
*/