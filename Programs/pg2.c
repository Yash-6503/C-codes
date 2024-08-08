/*
Finding simple interest:
ptr/100;
1000rs 12 months rate=2.5
*/

#include<stdio.h>
void main()
{
    float p, si, total, ri;
    int time;
    printf("\nEnter amount, time, rate: ");
    scanf("%f%d%f", &p, &time, &ri);
    si = (p * time / 100) * ri;
    total = p + si;
    printf("\nSimple interest is %.2f", si);
    printf("\nTotal amount is %.2f", total);
}