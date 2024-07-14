// Write a C Program to Print 2D Array

<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
=======
#include<stdio.h>
int main()
{
    int arr[2][3] = {{1, 2, 3}, {3, 2, 1}};
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
>>>>>>> 1f790a6aaec472e17c74b2fa7a0aa4fb939c27a8
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}