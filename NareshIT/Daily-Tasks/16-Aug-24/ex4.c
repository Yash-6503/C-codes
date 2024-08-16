/*
4.
Write a c program to calculate the salary and based on that salary 
calculate the tax for the person based on their designation by 
following few rules which are below

* 3 Type of Designation are there name as

 -> Developer

 (Indicated by D or d)

 -> Trainer 

 (Indicated by T or t)

 -> Manager 

 (Indicated by M or m)


[Note - For wrong designation print a message as "Invalid input".]


* 3 Type of Extra Allowance are there which will be added in the salary 

 Home Allowance  =10000

 Food Allowance  =3000

 Travel Allowance =10000


* If the designation is Developer There salary will be calculated by adding 

 Total Salary= Salary + Home Allowance

 
 If the designation is Trainer There salary will be calculated by adding 

 Total Salary= Salary + Home Allowance + Food Allowance 



 If the designation is Manager There salary will be calculated by adding 

 Total Salary= Salary + Home Allowance + Food Allowance + Travel Allowance



* If the Total Salary is greater than 40000 then calculate the tax as 10% from the total salary 

 else 5% of total salary



[note: Take the Designation and salary from the user and based on the that 

    calculate Total Salary and also based on Total Salary calculate the tax].
*/


#include<stdio.h>
void main()
{
    int food = 3000, travel = 10000, home = 10000, salary;
    float TotalSalary, FinalSal;
    char design;

    printf("\nEnter Designation (d, D, t, T, m, M): ");
    scanf("%c", &design);
    printf("\nEnter Salary: ");
    scanf("%d", &salary);

    if(design == 'd' || design == 'D')
    {   
        TotalSalary = salary + home;
    }
    else if(design == 't' || design == 'T')
    {   
        TotalSalary = salary + home + food;
    }
    else if(design == 'm' || design == 'M')
    {   
        TotalSalary = salary + home + food + travel;
    }
    else
    {
        printf("\nInvalid Designation\nPlease enter design (d, D, t, T, m, M)");
    }

    if(TotalSalary >= 40000)
    {
        FinalSal = TotalSalary - (TotalSalary / 100) * 10;
        printf("\nTotal Salary of %c is %.2f", design, TotalSalary);
        printf("\n10%% Tax on Salary is %.2f", (TotalSalary / 100) * 10);
        printf("\nTotal Salary After Deducting Tax is %.2f", FinalSal);
    }
    else
    {
        FinalSal = TotalSalary - (TotalSalary / 100) * 5;
        printf("\nTotal Salary of %c is %.2f", design, TotalSalary);
        printf("\n5%% Tax on Salary is %.2f", (TotalSalary / 100) * 5);
        printf("\nTotal Salary After Deducting Tax is %.2f", FinalSal);
    }
}


/*
Enter Designation (d, D, t, T, m, M): d

Enter Salary: 20000

Total Salary of d is 30000.00
5% Tax on Salary is 1500.00
Total Salary After Deducting Tax is 28500.00
*/

/*
Enter Designation (d, D, t, T, m, M): T

Enter Salary: 40000

Total Salary of T is 53000.00
10% Tax on Salary is 5300.00
Total Salary After Deducting Tax is 47700.00
*/

/*
Enter Designation (d, D, t, T, m, M): m

Enter Salary: 50000

Total Salary of m is 73000.00
10% Tax on Salary is 7300.00
Total Salary After Deducting Tax is 65700.00
*/