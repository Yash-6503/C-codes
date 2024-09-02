#include<stdio.h>
void main()
{
    int n, i, j, a;
    char ch = 'A';
    printf("\nEnter number of rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || n==i || j==i ){
                printf(" *");
            }
            else{
                printf("%2c", ch++);
            }

            if(ch>'Z')ch='A';
        }
        printf("\n");
    }
}

/*
Enter number of rows: 10
 *
 * *
 * A *
 * B C *
 * D E F *
 * G H I J *
 * K L M N O *
 * P Q R S T U *
 * V W X Y Z A B *
 * * * * * * * * * *
*/