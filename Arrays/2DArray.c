// Write a C Program to Print 2D Array

#include<stdio.h>
int main()
{
    int arr[2][3] = {{1, 2, 3}, {3, 2, 1}};
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}