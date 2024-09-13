/*
Finding prime / composite elements of an array
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, c=0;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
       for(j=1, c=0; j<=a[i]; j++)
       {
            if(a[i] %j == 0)
            {
                c++;
            }
       }
       if(c == 2)
       {
            printf("\n%d is prime", a[i]);
       }else{
            printf("\n%d is not prime", a[i]);
       }
    }
}

/*
Enter array size: 4

Enter 4 elements: 1
2
3
4

1 is not prime
2 is prime
3 is prime
4 is not prime
*/