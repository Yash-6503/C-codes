/*
Write a C program to find the prime or composite element 
of an array take input from user
*/

#include<stdio.h>
void main()
{
    int n, a[100], count=0, i, j;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=1, count=0; j<=a[i]; j++)
        {
            if(a[i]%j==0)
                count++;
        }

        if(count == 2){
            printf("\n%d is a prime number", a[i]);
        }else{
            printf("\n%d is a composite number", a[i]);
        }
    }
}

/*
Enter how many elements: 5

Enter 5 elements: 2
6
4
5
9

2 is a prime number
6 is a composite number
4 is a composite number
5 is a prime number
9 is a composite number
*/