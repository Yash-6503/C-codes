/*
Question: Write a c program to find the largest number among the 
Three number without using Control flow Statements

sample input: 12 45 32
sample output: 45
*/

#include<stdio.h>
void main()
{
    int n1, n2, n3;
    printf("\nEnter 3 number: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    (n1>n2 && n1>n3 && printf("\nGreater is %d", n1)) || (n2>n3 && n2>n1 && printf("\nGreater is %d", n2)) || (n3>n2 && n3>n1 && printf("\nGreater is %d", n3));
}

/*
Enter 3 number: 50
10
90
Greater is 90

Enter 3 number: 12
45
32
Greater is 45
*/