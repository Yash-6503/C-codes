/*
Que 1 : Write a program in C to count the total number 
of duplicate elements in an array.
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
    int a[100], n, i, j, c=0, total=0;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter %d elements: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        c=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                c++;
            }
        }

        if(c == 2)
        {
            total++;
        }
    }
    printf("\nTotal number of duplicate elements found in the array is: %d", total);
}

/*
Enter array size: 5

Enter 0 elements: 5

Enter 1 elements: 2

Enter 2 elements: 2

Enter 3 elements: 3

Enter 4 elements: 5

Total number of duplicate elements found in the array is: 2
*/

/*
Enter array size: 5

Enter 0 elements: 1

Enter 1 elements: 1

Enter 2 elements: 1

Enter 3 elements: 1

Enter 4 elements: 2

Total number of duplicate elements found in the array is: 1
*/
