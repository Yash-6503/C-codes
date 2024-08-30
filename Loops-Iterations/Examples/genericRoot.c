/*
Finding generic root of given no:
ex. 5677 => 5 + 6 + 7 + 7 = 25 => 2+5 = 7 is a generic root
*/

#include<stdio.h>
void main()
{
    int n, m, r, sum, s, s1;
    printf("\nEnter number: ");
    scanf("%d", &n);
    m=n;
    sum = 0;
    while(m!=0)
    {
        r=m;
        for(r=r%10; r!=0; r=r/10)
        {
            sum = sum + r;
        }
        m=m/10;
    }

    if(sum > 9 || sum > -9)
    {
        s1=0;
        while(sum!=0)
        {
            s = sum % 10;
            s1 = s1 + s;
            sum=sum/10;
        }
    }
    printf("Generic Root = %d", s1);
}

/*
Enter number: 5677
Generic Root = 7

Enter number: 12345
Generic Root = 6
*/