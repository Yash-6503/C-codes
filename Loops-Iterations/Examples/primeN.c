/*
Program to print n prime numbers
*/

#include<stdio.h>
void main()
{
    int n1, n2, i, j, count, c=0;
    printf("\nEnter starting & ending value: ");
    scanf("%d %d", &n1, &n2);
    
    for(i=n1; i<=n2; i++)
    {
        for(j=1, count=0; j<=i; j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        if(count == 2){
            printf("\n%d ", i, c++);
        }
    }
    printf("\nAll prime numbers between %d to %d are %d", n1, n2, c);
}

/*
Enter starting & ending value: 1
100

2 
3 
5 
7 
11 
13 
17 
19 
23 
29 
31 
37 
41 
43 
47 
53 
59 
61 
67 
71 
73 
79 
83 
89 
97 

All prime numbers between 1 to 100 are 25
*/