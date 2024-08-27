/*
1.
Write a program in C to display the cube of the number up to an integer.

Sample Input
Test Data :

Input number of terms : 5
Sample Output
Number is : 1 and cube of the 1 is :1

Number is : 2 and cube of the 2 is :8

Number is : 3 and cube of the 3 is :27

Number is : 4 and cube of the 4 is :64

Number is : 5 and cube of the 5 is :125
*/

#include<stdio.h>
void main()
{
    int n, i, cube, m;
    printf("\nEnter number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        cube = i * i * i;
        printf("\nNumber is : %d and cube of the %d is : %d", i, i, cube);
    }
    // m=n;
    // while(n!=0)
    // {
    //     cube = n * n * n;
    //     n--;
    //     printf("\nNumber is : %d and cube of the %d is : %d", m, m, cube);
    // }
}

/*
Enter number: 5

Number is : 1 and cube of the 1 is : 1
Number is : 2 and cube of the 2 is : 8
Number is : 3 and cube of the 3 is : 27
Number is : 4 and cube of the 4 is : 64
Number is : 5 and cube of the 5 is : 125
*/

/*
Enter number: 10

Number is : 1 and cube of the 1 is : 1
Number is : 2 and cube of the 2 is : 8
Number is : 3 and cube of the 3 is : 27
Number is : 4 and cube of the 4 is : 64
Number is : 5 and cube of the 5 is : 125
Number is : 6 and cube of the 6 is : 216
Number is : 7 and cube of the 7 is : 343
Number is : 8 and cube of the 8 is : 512
Number is : 9 and cube of the 9 is : 729
Number is : 10 and cube of the 10 is : 1000
*/