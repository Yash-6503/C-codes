/*
Find the step no of given number
ex. 1234 => it is a step no
ex. 1245 => it is a not step no
*/

#include<stdio.h>
void main()
{
    long n, r1, r2;
    printf("\nEnter a number: ");
    scanf("%ld", &n);
    r1=n%10; n=n/10;
    while(n!=0)
    {
        r2=n%10;
        if(r1-r2==1 || r2-r1==1)
        {
            r1=r2;
        }
        else{
            printf("\nNot a step number");
            return;
        }
        n=n/10;
    }
    printf("\nIt is a step no");
}

/*
Enter a number: 1234
It is a step number

Enter a number: 1233
Not a step number

Enter a number: -1234
It is a step number

Enter a number: 222
Not a step number
*/