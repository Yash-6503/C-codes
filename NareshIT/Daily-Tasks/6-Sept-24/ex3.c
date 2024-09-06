/*
3.
Write a C program to find the max element from an array.
Sample Input
Input as :
Enter array size : 5
Sample Output
Enter 5 elements : 4 5 3 6 2
Max element is : 6
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, temp;
    printf("\nEnter Array Size(1-100): ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    //1st method
    int max=0;
    for(i=0; i<n; i++)
    {
        if(max < a[i])
            max=a[i];
    }

    printf("\nMax element is: %d", max);

    /*
    //2nd Method
    for(i=0; i<=n-2; i++)
    {
        for(j=0; j<=n-i-2; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nMax element is: %d", a[n-1]);
    */   
}


/*
Enter Array Size(1-100): 5

Enter 5 elements: 4 5 3 6 2

Max element is: 6
*/