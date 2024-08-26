/*
Find a generic root of a given number then determine 
if the generic root is 1 then it is a magic number
*/

#include<stdio.h>
void main()
{
    int n, sum, r;
    printf("\nEnter number: ");
    scanf("%d", &n);
    while(n>9 || n<-9)
    {
        for(sum=0;n!=0;n=n/10)
        {
            r=n%10;
            sum+=r;
        }
        n=sum;
    }
    if(n==1)
    {
        printf("\nMagic Number");
    }
    else{
        printf("\nNot a Magic Number");
    }
}

/*
Enter number: 1
Magic Number

Enter number: 100
Magic Number

Enter number: 1234
Magic Number

Enter number: 567
Not a Magic Number
*/