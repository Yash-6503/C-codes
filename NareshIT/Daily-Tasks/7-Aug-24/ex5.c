/*
Que 5 : Write a 'C' program to take the marks of a student in 5 subjects as input and determine 
how many subjects have marks greater than or equal to 35 and how many have marks less than 35. 
The program should not use any control statements (if, else, switch, etc.) or the ternary operator. 

Sample input : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20
Sample Output : Pass in 3 subject and fail in 2 subject. 
*/

#include<stdio.h>
void main()
{
    int sub1, sub2, sub3, sub4, sub5;
    int passCount, failCount;
    printf("\nEnter 5 subject marks: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    passCount = (sub1 >= 35) + (sub2 >= 35) + (sub3 >= 35) + (sub4 >= 35) + (sub5 >= 35);

    failCount = 5 - passCount;

    printf("\nPass in %d subject and fail in %d subjects", passCount, failCount);
}


/* Output
Enter 5 subject marks: 38
34
35
78
20

Pass in 3 subject and fail in 2 subjects
*/