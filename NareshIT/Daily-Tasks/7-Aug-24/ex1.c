/*Que 1 :  Without using control statments Write a C program to determine the next or previous multiple of 10 for a given two-digit number. 
--------  The program should follow these rules:
          If the last digit of the given number is greater than or equal to 5, the program should print the next multiple of 10.
          If the last digit of the given number is less than 5, the program should print the previous multiple of 10..


Sample input : int a = 34 , b = 25 , c = 86;
Sample Output : 30, 30, 90 
*/

#include<stdio.h>
void main()
{
    int n, prevMul, nextMul;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    nextMul = (n/10+1)*10;
    prevMul = n/10*10;
    n%10 >= 5  && printf("\n%d nextMul %d",n, nextMul) || printf("\n%d prevmul %d",n, prevMul);
}

/* output
Enter a number: 34
34 prevmul 30

Enter a number: 37
37 nextMul 40
*/