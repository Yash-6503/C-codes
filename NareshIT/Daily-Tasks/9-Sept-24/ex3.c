/*
Que 4 : Write a program in C to count the frequency of each element of an array.
-------
Sample input :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
element - 3 : 43

Sample output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 2 times
*/

#include<stdio.h>
void main()
{
    int a[100], b[100], n, i, j, c=1;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    printf("\nInput %d elements in array: ", n);
    for(i=0; i<n; i++)
    {
        printf("\nelement - %d : ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(b[i] != -1)
        {
            c=1;
            for(j=i+1; j<n; j++)
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
Enter array size: 4

Input 4 elements in array: 
element - 0 : 25

element - 1 : 12

element - 2 : 43

element - 3 : 43

25 occurs 1 times
12 occurs 1 times
43 occurs 2 times
*/

/*
Enter array size: 5

Input 5 elements in array: 
element - 0 : 20

element - 1 : 25

element - 2 : 43

element - 3 : 43

element - 4 : 20
*/