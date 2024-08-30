/*
Find the step no of given number
ex. 1234 => it is a step no
ex. 1245 => it is a not step no
*/

#include<stdio.h>
void main()
{
    long int n, r1, r2, m;
    printf("\nEnter Number: ");
    scanf("%ld", &n);
    m=n;
    r1 = n%10; n=n/10;
    while(n!=0)
    {
        r2 = n%10;
        if(r1-r2==1 || r2-r1==1)
        {
            r1=r2;
        }
        else{
            printf("\n%ld is not a step number", m);
            return;
        }
        n=n/10;
    }
    printf("\n%ld is a step number", m);
}

/*
Enter Number: 56789
56789 is a step number

Enter Number: 2222
2222 Not a step number

Enter Number: 1234
1234 is a step number

Enter Number: 1245
1245 Not a step number

Enter Number: 21212
21212 is a step number
*/