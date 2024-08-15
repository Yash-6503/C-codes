/*
7.
Write a C program to take input from the user about marks he got in 5 
subjects.
Find out the average of the student and give grade as per the below 
Condition.
if the avg is greater than or equal to 90 then give grade A.

if the avg is greater than or equal to 80 then give grade B.

if the avg is greater than or equal to 70 then give grade C.

if the avg is greater than or equal to 50 then give grade D.

if the avg is less than 50 then give grade F.

Print the Grade and average of the Student.
*/

#include<stdio.h>
void main()
{
    int sub1, sub2, sub3, sub4, sub5;
    float avg;
    printf("\nEnter 5 subject marks: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4,&sub5);
    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    if(avg >= 90)
    {
        printf("\nGrade is A and Average is %.2f", avg);
    }
    else if(avg >= 80)
    {
        printf("\nGrade is B and Average is %.2f", avg);
    }
    else if(avg >= 80)
    {
        printf("\nGrade is B and Average is %.2f", avg);
    }
    else if(avg >= 70)
    {
        printf("\nGrade is C and Average is %.2f", avg);
    }
    else if(avg >= 50)
    {
        printf("\nGrade is D and Average is %.2f", avg);
    }
    else
    {
        printf("\nGrade is F and Average is %.2f", avg);
    }
}


/*
Enter 5 subject marks: 90
98
96
94
99

Grade is A and Average is 95.00
*/

/*
Enter 5 subject marks: 90
86
78
96
87

Grade is B and Average is 87.00
*/

/*
Enter 5 subject marks: 50
20
40
10
40

Grade is F and Average is 32
*/