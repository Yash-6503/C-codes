/*
Que 1 : Write a program in C to add N natural numbers using a function.
-------

-> create int main() function.
-> create int naturalNumberSum(int a) function. this function will take one integer number as input and will return sum of natural number.
-> in main function read one values and call naturalNumberSum function. and print the result.

Sample input : Input n value : 10
Sample output : The sum of 10 natural numbers is 55
*/

#include<stdio.h>
int naturalNumberSum();

void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nSum of %d natural numbers : %d", n, naturalNumberSum(n));
}

int naturalNumberSum(int n)
{
    int sum=0, i;
    for(i=1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}

/*
Enter a number: 10
Sum of 10 natural numbers : 55

Enter a number: 5
Sum of 5 natural numbers : 15
*/