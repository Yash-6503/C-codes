/*
4.
Write a C program to add all the digits present in a given 
number until it became a single digit. Develop it by using 
while loop.
Sample Input
Input as : 5678
Sample Output
Ouput as : 8
*/

#include<stdio.h>
void main()
{
    long int n, m;
    int digit, r, rev=0, s1=0, s2=0, i;
    printf("\nEnter Number: ");
    scanf("%ld", &n);
    m=n;

    while(m!=0){
        r=m%10; 
        s1 = s1 + r;
        m=m/10;
    }

    while(s1!=0)
    {
        i=s1%10;
        s2=s2+i;
        s1=s1/10;
    }
    printf("\nOutput is %d", s2);   
}

/*
Enter Number: 5678
Output is 8

Enter Number: 12345
Output is 6
*/