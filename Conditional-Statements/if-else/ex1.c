/*find if the voter is eligible to vote or not with the help
of if-else condition*/

#include<stdio.h>
void main()
{
    int age;
    printf("\nEnter age: ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("\nEligible to Vote");
    }
    else
    {
        printf("\nNot Eligible to Vote");
    }
}

/*
Enter age: 20
Eligible to Vote

Enter age: 15
Not Eligible to Vote
*/