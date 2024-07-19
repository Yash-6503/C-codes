//Write a C program take input from user and acccept, display the matrix

#include<stdio.h>
int main()
{
    int matrix[2][3];
    int i, j;
    printf("\nEnter elements into matrix: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nElements of Matrix are: %d\n", matrix[]);
    return 0;
}