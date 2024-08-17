/*
3.
Write a C program to determine the eligibility for marriage based on 
specific criteria. The program checks the nationality India as (I or i) 
gender, and age of an individual and provides a response regarding their 
eligibility for marriage.

Conditions:
----------------
* The program is designed for Indian citizens only.

* If the person is an Indian citizen, the program prompts for their gender.

* For males, the program asks for their age and checks if it falls between
 21 and 50 (inclusive). 
 If so, it displays a message stating that "Congratulation! you are eligible
  for marriage".
 If not, it must display a message stating that "Sorry! you are not eligible 
 for marriage".

* For females, the program asks for their age and checks if it falls between 
18 and 45 (inclusive). 
 If so, it displays a message stating that "Congratulation! you are eligible 
 for marriage".
 If not, it must display a message stating that "Sorry! you are not eligible 
 for marriage".

* If the person is not an Indian citizen, the program displays a message stating 
that the eligibility check is only for Indian citizens.

* Your task is to write a C program that implements the above conditions 
to determine the eligibility for marriage.

Instructions:
------------------
* Implement the program using the C programming language.
* Use suitable variable names and data types for the program.
* Display appropriate messages to guide the user through the input process.
* Assume that the user will provide valid inputs.
* Test your program with different inputs to ensure its correctness.

*/

#include<stdio.h>
void main()
{
    int age;
    char gender, nation;

    printf("\nEnter your Nationality (only 1 char ex.i/I): ");
    scanf("%c", &nation);

    if(nation == 'i' || nation == 'I')
    {
        printf("\nEnter Gender: ");
        scanf(" %c", &gender);

        if(gender == 'm' || gender == 'M' || gender == 'f' || gender == 'F')
        {
            printf("\nEnter Age: ");
            scanf("%d", &age);

            if((gender == 'm' || gender == 'M') && age >= 21 && age <= 50)
            {
                printf("\nCongratulation! you are eligible for marriage");
            }
            else if((gender == 'f' || gender == 'F') && age >= 18 && age <= 45)
            {
                printf("\nCongratulation! you are eligible for marriage");
            }
            else
            {
                printf("\nSorry! you are not eligible for marriage");
            }
        }
        else
        {
            printf("\nInvalid Gender");
        }
    }
    else
    {
        printf("\nThe program is designed for Indian citizens only.");
    }
}

/*
Enter your Nationality (only 1 char ex.i/I): i

Enter Gender: M

Enter Age: 21

Congratulation! you are eligible for marriage
*/

/*
Enter your Nationality (only 1 char ex.i/I): I

Enter Gender: m

Enter Age: 20

Sorry! you are not eligible for marri
*/

/*
Enter your Nationality (only 1 char ex.i/I): i

Enter Gender: F

Enter Age: 16

Sorry! you are not eligible for marriage
*/

/*
Enter your Nationality (only 1 char ex.i/I): I

Enter Gender: f

Enter Age: 18

Congratulation! you are eligible for marriage
*/