/*
Write a C program to find the frequency of array elements in 
an array.
*/

#include<stdio.h>
void main()
{
    int n, a[100], b[100] = {0}, i, j, c;
    printf("\nEnter array size (1-100): ");
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

    for(i=0; i<n; i++) if(b[i] != -1) printf("\n%d found %d times", a[i], b[i]);

}

/*
Enter array size (1-100): 9

Enter 9 elements: 9 3 5 9 1 9 5 3 2

9 found 3 times
3 found 2 times
5 found 2 times
1 found 1 times
2 found 1 times
*/