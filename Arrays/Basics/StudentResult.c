/*
Write a C program to find the student result using array
*/

#include<stdio.h>
void main()
{
    int sub[100], n, i, j, total=0, p=1;
    float avg;
    printf("\nEnter 6 subjects marks: ");
    for(i=0; i<6; i++)
    {
        scanf("%d", &sub[i]);
        total += sub[i];
        if(sub[i]<35)
            p=0;
    }
    avg = total/6.0;
    printf("\nTotal Marks = %d\nAvg = %.2f\nGot = %s", total, avg, p?"Passed":"Failed");
}

/*
Enter 6 subjects marks: 50
80
90
70
97
85

Total = 472  
Avg = 78.67 
Got Passed
*/

/*
Enter 6 subjects marks: 30
50
70
40
55
89

Total Marks = 334
Avg = 55.67
Got = Failed
*/