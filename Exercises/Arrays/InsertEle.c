/*
Program to insert an element in array at given position.
*/

#include<stdio.h>
void main()
{
    int a[100], n, i, j, ele, pos;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element & position to insert in array: ");
    scanf("%d %d", &ele, &pos);

    if(pos < 1 || pos > n+1)
    {
        printf("\nPlease enter positon between 1 to %d only.", n+1);
    }
    else{

        for(i=n; i>=pos; i++)
        {
            a[i] = a[i-1];
        }
        a[i] = ele;

        
        printf("\nAfter inserting element array is: ");
        for(i=0; i<n; i++)
        {
            printf("%4d", a[i]);
        }
    }
}

/*
Enter array size: 5

Enter 5 elements: 1
2
3
4
5

Enter element & position to insert in array: 6
2

After inserting element array is:  1 6 2 3 4
*/