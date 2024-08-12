/*
Question: Write a c program that will find the nearest multiple of 10 of given 2 digit numbers Without using control flow statements
Note:: read the Numbers from the user through the scanf
sample input: 23 67 45
sample output: 20 70 50
Question: Write a c program that will find the nearest multiple of 10 of given 2 digit numbers Without using control flow statements
Note:: read the Numbers from the user through the scanf
sample input: 23 67 45
sample output: 20 70 50
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter 2 digit number: ");
    scanf("%d",&n);
    n%10 >= 5 && printf("\nNearest 10 multiple of %d is %d", n, (n/10+1)*10) || printf("\nNearest 10 multiple of %d is %d", n, n/10*10);
}


/*
Enter a number: 23
Nearest 10 multiple of 23 is 20

Enter a number: 67
Nearest 10 multiple of 67 is 70

Enter a number: 45
Nearest 10 multiple of 45 is 50
*/