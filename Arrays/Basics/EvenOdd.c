/*
Write a C program to find even odd zero from the 
given array.
*/

#include<stdio.h>
void main()
{
    int n, a[10], i;
    static int z, e, o;
    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i] == 0){
            z++;
        }
        else if(a[i]%2 == 0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("\nZero = %d \nEven = %d \nOdd = %d", z, e, o);
}

/*
Enter how many elements: 5

Enter 5 elements: 
4
2
0
3
5

Zero = 1 
Even = 2 
Odd = 2
*/