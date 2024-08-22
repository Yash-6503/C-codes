//Number to Text conversion
//123 as one two three

#include<stdio.h>
void main()
{
    int n, r, rev=0, m;
    printf("\nEnter number: ");
    scanf("%d", &n);
    if(n<0) printf("-",n=-n);
    m=n;
    while(m!=0)
    {
        rev=rev*10+(m%10);
        m=m/10;
    }

    printf("\nRev = %d\n", rev);

    do{
        switch(rev%10)
        {
            case 0: printf("\nZero"); break;
            case 1: printf("\nOne"); break;
            case 2: printf("\nTwo"); break;
            case 3: printf("\nThree"); break;
            case 4: printf("\nFour"); break;
            case 5: printf("\nFive"); break;
            case 6: printf("\nSix"); break;
            case 7: printf("\nSeven"); break;
            case 8: printf("\nEight"); break;
            case 9: printf("\nNine"); break;
            default: printf("\nInvalid Choice");
        }
        rev = rev/10; printf(" ");
    }while(rev!=0);
    while(n!=0 && n%10==0) printf("Zero ",n=n/10);
}