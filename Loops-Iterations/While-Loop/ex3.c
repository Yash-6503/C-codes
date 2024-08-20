//printing n even numbers using while loop

#include<stdio.h>
void main()
{
    int n, i=0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while(i<n)
    {
        printf("%4d", i+=2);
    }
}

/*
Enter a number: 10
   2   4   6   8  10
*/

/*
Enter a number: 100
    02   4   6   8  10  12  14  16  18  20  22  24  26  28  30  32  34  36  38  40  42  44  46  48  50  52  54  56  58  60  62  64  66  68  70  72  74  76  78  80  88  90  92  94  96  98 100
*/