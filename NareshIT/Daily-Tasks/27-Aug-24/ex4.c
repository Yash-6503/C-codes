/*
4.
Write a program in C to display the multiplication table for a given integer. 
Sample Input
Test Data :

Input the number (Table to be calculated) : 15
Sample Output
Expected Output :

15 X 1 = 15

...

...

15 X 10 = 150 
*/

#include<stdio.h>
void main()
{
    int n, i;
    printf("\nEnter number: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        printf("\n%d X %d = %d", n, i, n*i);
    }
    // i=1;
    // while(i!=11)
    // {
    //     printf("\n%d X %d = %d", n, i, n*i);
    //     i++;
    // }
}

/*
Enter number: 5

5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
*/

/*
Enter number: 10

10 X 1 = 10
10 X 2 = 20
10 X 3 = 30
10 X 4 = 40
10 X 5 = 50
10 X 6 = 60
10 X 7 = 70
10 X 8 = 80
10 X 9 = 90
10 X 10 = 100
*/