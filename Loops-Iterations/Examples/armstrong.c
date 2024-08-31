/*
program to find the number is armstrong or not
*/

#include<stdio.h>
#include<math.h>
void main()
{
    int n, m, sum, r, c, i, digit;
    printf("\nEnter number: ");
    scanf("%d", &n);
    m=n;
    c=0;
    sum=0;
    for(m=n; m!=0; m=m/10) c++;
    for(m=n; m!=0; m=m/10)
    {
        digit = m%10;
        sum += pow(digit, c);
    }
    if(sum == n)
    {
        printf("\n%d is Armstrong Number", n);
    }
    else{
        printf("\n%d is Not Armstrong Number", n);
    }
    
}

/*
Enter number: 153
153 is Armstrong Number

Enter number: 2
2 is Armstrong Number

Enter number: 100
100 is Not Armstrong Number
*/