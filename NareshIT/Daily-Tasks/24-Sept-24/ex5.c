/*
Que 5 : Write a C program to calculate the sum of all elements in an integer array using function.
------

-> create int main() function.
-> create int arraySum(char str[]) function. this function will take integer array as input in parameter and will return the total sum as result.
-> in main function read size of array , then based on size create new array and store the values.
-> call the arraySum function and print the sum which is return by arraySum function.


Sample input:
              Size of the array: 5
              Array elements: 10 20 30 40 50


Sample output: Sum of all elements in the array: 150
*/

#include<stdio.h>
int arraySum();
void main()
{
    int len=0, arr[10] = {10, 20, 30, 40, 50, 0};
    while(arr[len] != 0){
        len++;
    }

    printf("\nSum of all elements in the array: %d", arraySum(arr, len));
}

int arraySum(int a[], int len)
{
    int i, sum=0;
    for(i=0; i<len; i++)
    {
        sum+=a[i];
    }
    return sum;
}

/*
10,20,30,40,50
Sum of all elements in the array: 150
*/