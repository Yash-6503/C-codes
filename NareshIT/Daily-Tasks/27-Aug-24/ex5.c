/*
5.
Sum Of Given Series
Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Sample Input
Test Data :

Input the number of terms : 5
Sample Output
Expected Output :

1 + 11 + 111 + 1111 + 11111

The Sum is : 12345
*/

#include<stdio.h>
void main()
{
    int n, i, x, sum=0;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {   
        x=i;
        while(x!=0)
        {
            printf("1", x--);
        }

        if(i!=n)
        printf(" + ");
        
        sum=(sum*10)+i;
    }
    printf("\nThe Sum is: %d", sum);
}

/*
Enter Number: 5
1 + 11 + 111 + 1111 + 11111
The Sum is: 12345
*/

/*
Enter Number: 10
1 + 11 + 111 + 1111 + 11111 + 111111 + 1111111 + 11111111 + 111111111 + 1111111111
The Sum is: 1234567900
*/