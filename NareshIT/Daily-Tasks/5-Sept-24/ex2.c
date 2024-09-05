/*
2.
Write a program in C to count the total number of duplicate elements in an array.
--------
Sample input :
element - 0 : 5
element - 1 : 2
element - 2 : 2
element - 3 : 3
element - 4 : 5


Sample output :
Total number of duplicate elements found in the array is : 2
*/

#include<stdio.h>
void main()
{
    int a[10], n, i, j, count=0;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in the array is: %d", count);
}


/*
Enter how many elements: 5

Enter 5 elements: 5
2
2
3
5

Total number of duplicate elements found in the array is: 2
*/

/*
Enter how many elements: 5

Enter 5 elements: 4
1
4
2
1

Total number of duplicate elements found in the array is: 2
*/