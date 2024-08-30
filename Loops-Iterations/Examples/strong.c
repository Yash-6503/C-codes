/*
Program to find strong n numbers
*/

#include<stdio.h>
void main()
{
    int n1, n2, m, sum=0, f, i, j, r;
    printf("\nEnter starting & ending value: ");
    scanf("%d %d", &n1, &n2);
    for(i = n1; i <= n2; i++)
    {
        m=i;
        sum = 0;
        while(m!=0)
        {
            r=m%10;
            f=1;
            for(j=1; j<=r; j++)
            {
                f = f * j;
            }
            sum += f;
            m=m/10;
        }
        
        if(sum == i)
            printf("\n%d is strong number", i);
    }
}

/*
Enter starting & ending value: 1
200

1 is strong number
2 is strong number
145 is strong number
*/

/*
Enter starting & ending value: 100
999

145 is strong number
*/