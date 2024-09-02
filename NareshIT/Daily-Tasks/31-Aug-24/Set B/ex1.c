/*
Write a c program to print numbers in words
*/

#include<stdio.h>
void main()
{
    int n, m, r=0, rev=0;
    printf("\nEnter number: ");
    scanf("%d", &n);
    m = n;

    while(m!=0)
    {
        rev = (rev * 10) + (m % 10);
        m = m / 10;
    }

    while(rev!=0)
    {
        r = rev % 10;
        switch(r)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        // if (r == 0)
        // {
        //     printf("Zero ");
        // }
        // else if (r == 1)
        // {
        //     printf("One ");
        // }
        // else if(r == 2)
        // {
        //     printf("Two ");
        // }
        // else if(r == 3)
        // {
        //     printf("Three ");
        // }
        // else if(r == 4)
        // {
        //     printf("Four ");
        // }
        // else if(r == 5)
        // {
        //     printf("Five ");
        // }
        // else if(r == 6)
        // {
        //     printf("Six ");
        // }
        // else if(r == 7)
        // {
        //     printf("Seven ");
        // }
        // else if(r == 8)
        // {
        //     printf("Eight ");
        // }
        // else if(r == 9)
        // {
        //     printf("Nine ");
        // }
        // else{
        //     printf("\n");
        // }
        rev = rev / 10;
    }
}

/*
Enter number: 501
Five Zero One

Enter number: 12345
One Two Three Four Five
*/