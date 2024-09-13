/*
Write a C program to find the frequency of array elements in 
an array.
*/

#include<stdio.h>
void main()
{
    int a[100], b[100] = {0}, i, j, n, c;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(b[i] != -1)
        {
            for(j=i+1, c=1; j<n; j++)
            {
                if(a[i] == a[j])
                {
                    c++;
                    b[j] = -1;
                }
            }
            b[i] = c;
        }
    }

    for(i=0; i<n; i++)
    {
        if(b[i] != -1)
        {
            printf("\n%d occurs %d times", a[i], b[i]);
        }
    }
}

/*
Enter array size: 5

Enter 5 elements: 1
2
3
2
1

1 occurs 2 times
2 occurs 2 times
3 occurs 1 times
*/