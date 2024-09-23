/*
Que 4 : Write a C program to find the biggest number between three number using the function.
-------

-> create int main() function.
-> create int biggestNumber(int a, int b, int c) function.
-> in main function read three numbers as input and call biggestNumber(int a, int b, int c) function. here biggestNumber(int a, int b, int c) function will perform the operation and will return biggest number as result to the main function.
-> in main function catch the biggest number which is return by biggestNumber(int a, int b, int c) function print the result.


Sample input : Input three positive number : 13 31 19

Sample output : The biggest number is 31.
*/

#include<stdio.h>
void main()
{
    int a, b, c, bnum;
    printf("\nEnter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    bnum = biggestNumber(a, b, c);
    if(bnum == a)
    {
        printf("\n%d (a) is big", bnum);
    }
    else if (bnum == b)
    {
        printf("\n%d (b) is big", bnum);
    }
    else if (bnum == 1)
    {
        printf("\nAll are equal");
    }
    else{
        printf("\n%d (c) is big", bnum);
    }
}
   

int biggestNumber(int a, int b, int c)
{
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else if(c>a && c>b)
    {
        return c;
    }
    if(a==b && a>c)
    {
        return a;
    }
    else if(b==c && b>a)
    {
        return b;
    }
    else if(a==c && a>b)
    {
        return a;
    }
    else if(a==b && b==c && a==c)
    {
        return 1;
    }
}

/*
Enter 3 numbers: 10
20
30

30 (c) is big
*/