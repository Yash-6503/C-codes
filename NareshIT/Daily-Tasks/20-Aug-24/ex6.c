/*
6.
Using switch statement write a C Program to take the value from the user as input
marks of five subjects Physics, Chemistry, Biology, Mathematics, and Computer. 
Calculate percentage and grade according to the following: Percentage >= 90% : Grade A, 
Percentage >= 80% : Grade B, Percentage >= 70% : Grade C, Percentage >= 60% : Grade D,
 Percentage >= 40% : Grade E, Percentage < 40% : Grade F, Using switch statement.

[Note:-Take All the values as Integer]
*/

#include<stdio.h>
void main()
{
    int phy, chem, bio, math, comp;
    float per;
    printf("\nEnter 5 subjects Marks: ");
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);
    per = (phy + chem + math + bio + comp) / 5;
    switch((int)per/10)
    {
        case 10: case 9:
            printf("\nPercentage: %.2f\nGrade A", per);
            break;

        case 8:
            printf("\nPercentage: %.2f\nGrade B", per);
            break;

        case 7:
            printf("\nPercentage: %.2f\nGrade C", per);
            break;

        case 6:
            printf("\nPercentage: %.2f\nGrade D", per);
            break;

        case 4: case 5:
            printf("\nPercentage: %.2f\nGrade E", per);
            break;

        default:
            printf("\nPercentage: %.2f\nGrade F", per);
    }
}

/*
Enter 5 subjects Marks: 98
89
90
97
99

Percentage: 94.00
Grade A
*/

/*
Enter 5 subjects Marks: 89
86
80
83
84

Percentage: 84.00
Grade B
*/

/*
Enter 5 subjects Marks: 70
80
79
73
69

Percentage: 74.00
Grade C
*/

/*
Enter 5 subjects Marks: 55
69
62
59
69

Percentage: 62.00
Grade D
*/

/*
Enter 5 subjects Marks: 50
68
51
48
55

Percentage: 54.00
Grade E
*/

/*
Enter 5 subjects Marks: 40
32
20
42
30

Percentage: 32.00
Grade F
*/