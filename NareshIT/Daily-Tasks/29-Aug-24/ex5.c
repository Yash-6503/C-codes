/*
5.
Write a C program to find all Armstrong numbers between 100 to 999.
Sample Input
153
Sample Output
153 is an Armstrong number because (1)^3+(5)^3+(3)^3 = 153.
*/

#include<stdio.h>
#include<math.h>
void main()
{
    int i, j, sum, m,  c, digit;
    for(i=100; i<=999; i++)
    {
        m=i;
        j=i;
        sum=0;
        c=0;
        while(j)
        {
            c=c+1;
            j=j/10;
        }

        while(m!=0)
        {
            digit = m%10;
            sum += pow(digit, c);
            m=m/10;
        }

        if(sum == i)
        {
            printf("%d is an Armstrong number because (%d)^3 + (%d)^3 + (%d)^3 = %d.\n", i, i / 100, (i / 10) % 10, i % 10, i);
        }
    }

}

/* armstrong numbers between 1 to 200
1 is an Armstrong number because (0)^3 + (0)^3 + (1)^3 = 1.
2 is an Armstrong number because (0)^3 + (0)^3 + (2)^3 = 2.
3 is an Armstrong number because (0)^3 + (0)^3 + (3)^3 = 3.
4 is an Armstrong number because (0)^3 + (0)^3 + (4)^3 = 4.
5 is an Armstrong number because (0)^3 + (0)^3 + (5)^3 = 5.
6 is an Armstrong number because (0)^3 + (0)^3 + (6)^3 = 6.
7 is an Armstrong number because (0)^3 + (0)^3 + (7)^3 = 7.
8 is an Armstrong number because (0)^3 + (0)^3 + (8)^3 = 8.
9 is an Armstrong number because (0)^3 + (0)^3 + (9)^3 = 9.
153 is an Armstrong number because (1)^3 + (5)^3 + (3)^3 = 153.
*/

/* armstrong numbers between 100 to 999
153 is an Armstrong number because (1)^3 + (5)^3 + (3)^3 = 153.
370 is an Armstrong number because (3)^3 + (7)^3 + (0)^3 = 370.
371 is an Armstrong number because (3)^3 + (7)^3 + (1)^3 = 371.
407 is an Armstrong number because (4)^3 + (0)^3 + (7)^3 = 407.
*/