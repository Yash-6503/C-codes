/*
Finding generic root of given no:
ex. 5677 => 5 + 6 + 7 + 7 = 25 => 2+5 = 7 is a generic root
*/

#include<stdio.h>
void main()
{
    int n, i, r, sum;
    printf("\nEnter number: ");
    scanf("%d", &n);
    while(n>9 || n<-9)
    {
        for(sum=0; n!=0; n=n/10)
        {
            r=n%10;
            sum+=r;
        }
        n=sum;
    }
    printf("\nGeneric Root = %d", n);
}

/*
Enter number: 5677
Generic Root = 7

Enter number: 5000
Generic Root = 5

Enter number: 1250
Generic Root = 8
*/