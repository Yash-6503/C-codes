/*
6.
Write a C program by taking one integer value from the user, if the 
given number's last digit is smaller than 5 then print the square of
that number else print that same number.

Case-1:
Enter a number : 12

Output is :
144

Case 2 :
Enter a number : 17

Output is :
17
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    if(n%10 < 5)
    {
        printf("\nSquare of %d is %d", n, n*n);
    }
    else{
        printf("\nThe number is %d", n);
    }
}

/*
Enter a number: 12
Square of 12 is 144

Enter a number: 17
The number is 17
*/