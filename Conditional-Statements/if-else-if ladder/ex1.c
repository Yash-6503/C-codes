/*Take the student marks from user and check if the student is 
is in which class with using if-else ladder*/

#include<stdio.h>
void main()
{
    int marks;
    printf("\nEnter Marks: ");
    scanf("%d",&marks);
    if(marks >= 60)
    {
        printf("\nFirst Class");
    }
    else if(marks >= 50)
    {
        printf("\nSecond Class");
    }
    else if(marks >= 35)
    {
        printf("\nPass");
    }
    else
    {
        printf("\nFail");
    }
}


/*
Enter Marks: 75
First Class

Enter Marks: 55
Second Class

Enter Marks: 45
Pass

Enter Marks: 30
Fail
*/
