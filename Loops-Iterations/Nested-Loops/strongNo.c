/*Program to find a given number is strong number or not
Forex. 145 is a strong number
*/
#include<stdio.h>
void main()
{
    int n, f, r, m, sum;
    printf("\nEnter number: ");
    scanf("%d", &n);
    for(m=n;m!=0;m=m/10)
    {
        for(r=m%10; r>1; r--)
        {
            f*=r;
        }
        sum+=f;
    }
    if(sum == n)
    {
        printf("\n%d is a Strong Number", n);
    }else{
        printf("\n%d is not a Strong Number", n);
    }
}

/*
Enter number: 145
145 is a Strong Number

Enter number: 22
22 is not a Strong Number

Enter number: 150
150 is not a Strong Number
*/