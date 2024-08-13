/*
3.
Write a C program to check whether a number is divisible by 5 and 11 
or not.

Input as : 
Enter a number : 55

Output as : 
55 is divisible by both 5 and 11
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(n%5==0 && n%11==0)
    {
        printf("\n%d is divisible by 5 and 11", n);
    }
    else{
        printf("\n%d is not divisible by 5 and 11", n);
    }
}

/*
Enter a number: 55
55 is divisible by 5 and 11

Enter a number: 60
60 is not divisible by 5 and 11

Enter a number: 110
110 is divisible by 5 and 11
*/