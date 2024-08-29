/*
1.
Write a C program to find all strong numbers between 1 to 500.
Sample Input
input =145
Sample Output
145 is Strong number
*/

#include<stdio.h>
void main()
{
    int n, i, j, m, sum, f, digit;
    for(i=1; i<=500; i++)
    {
        sum=0;
        m=i;
        while(m!=0)
        {
            digit = m%10;
            f=1;
            for(j=1; j<=digit; j++)
            {
                f=f*j;
            }
            sum+=f;
            m=m/10;
        }
        if(sum == i)
        {
            printf("\n%d is a strong number", i);
        }
    }
}

/*
1 is a strong number
2 is a strong number
145 is a strong number
*/