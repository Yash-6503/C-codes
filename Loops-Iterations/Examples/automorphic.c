/*
Find whether the number is Automorphic or not
*/

#include<stdio.h>
void main()
{
    long int n, sqr, m, count=1;
    printf("\nEnter number: ");
    scanf("%ld", &n);
    sqr = n*n;
    m=n;
    while(m!=0)
    {
        if(m%10 != sqr%10)
        {
            count = 0;
            break;
        }
        sqr = sqr/10;
        m=m/10;
    }
    if(count == 1)
    {
        printf("\n%ld is a Automorphic number", n);
    }else{
        printf("\n%ld is not Automorphic number", n);
    }
}

/*
Enter number: 5
5 is a Automorphic number

Enter number: 25
25 is a Automorphic number

Enter number: 4
4 is not Automorphic number

Enter number: 100
100 is not Automorphic number

Enter number: 625
625 is a Automorphic number
*/