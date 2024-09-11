/*
Read elements of n*n matrix and find the no of even/odd/zero
elements row wise:
*/

#include<stdio.h>
void main()
{
    int a[10][10], i, j, nr, nc, z, e, o;
    printf("\nEnter rows & columns of matrix: ");
    scanf("%d %d", &nr, &nc);

    printf("\nEnter %d elements: ", nr*nc);
    for(i=0; i<nr; i++)
    {
        for(j=0, z=e=o=0; j<nc; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEven\tOdd\tZeros");
    printf("\n-------------------------------------");
    for(i=0; i<nr; i++)
    {
        for(j=0, e=z=o=0; j<nc; j++)
        {
            if(a[i][j] == 0){
                z++;
            }else if(a[i][j] %2==0){
                e++;
            }else{
                o++;
            }
        }
        printf("%d\t%d\t%d\n", e, o, z);
    }
}

/*
Enter rows & columns of matrix: 2 2

Enter 4 elements: 
1 2
3 0

Even    Odd     Zeros
--------------------------
1       1       0
0       1       1
*/