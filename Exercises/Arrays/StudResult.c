/*
Finding a student result
*/

#include<stdio.h>
void main()
{
    char s[100];
    int a[100], n, i, j, sum=0;
    printf("\nEnter student name: ");
    scanf("%[^\n]", s);
    printf("\nEnter how many subjects: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    float avg = sum/n;
    printf("\nStudent name is %s \ntotal marks = %d \nAvg = %.2f \nAnd got ", s, sum, avg);
    printf(avg>=35.0 ? "Passed" : "Failed");
}

/*
Enter student name: Yash Walke

Enter how many subjects: 6

Enter 6 elements: 80
97
74
87
75
93

Student name is Yash Walke 
total marks = 506 
Avg = 84.00 
And got Passed
*/