/*
Que 4 : Write a program in C to rotate an array by N positions.
--------
Sample input:
The given array is : 0 3 6 9 12 14 18 20 22 25 27
Enter the position :4

Sample output :
After rotating from 4th position the array is:
12 14 18 20 22 25 27 0 3 6 9
*/

#include<stdio.h>
void main()
{
    int i, j, a[100], n, pos;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the position: ");
    scanf("%d", &pos);

    printf("\nAfter rotating from 4th position the array is: ");
    for(i=pos; i<n; i++)
    {
        printf("%3d", a[i]);
    }

    for(i=0; i<pos; i++)
    {
        printf("%3d", a[i]);
    }
}


/*
Enter array size: 11

Enter 11 elements: 0 3 6 9 12 14 18 207
5
Enter the position: 4

After rotating from 4th position the array is:  12 14 18 20 22 15 27  0  3  6  9
*/

/*
Enter array size: 5

Enter 5 elements: 1 2 3 4 5

Enter the position: 4

After rotating from 4th position the array is:   5  1  2  3  4
*/