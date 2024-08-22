//Printing 12345678 as 78 56  34 12

#include<stdio.h>
void main()
{
    long n, r;
    printf("\nEnter number: ");
    scanf("%ld", &n);
    while(n!=0)
    {
        if(n>9 && n%100<10)
            printf("0");
        r = n%100;
        printf("%ld ", r);
        n = n/100;
    }
}

/*
Enter number: 12345678
78 56 34 12 

Enter number: 10000
00 00 1

Enter number: 10
10
*/
