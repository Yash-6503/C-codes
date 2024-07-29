//Round of the number without using if-else, ternary operators
/*
Steps in Roundoff
1.n=23 here last digit is below 5 then ans should be = 20
2.n=26 here last digit is >=25 then ans should be = 30
*/

//code
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a Number: ");
    scanf("%d", &n);
    n%10>=5 && printf("%d", (n/10+1)*10) || printf("%d", n/10*10);
    printf("\n");
    return 0;
}

/*
output
n=21    =>  20
n=26    =>  30
*/

/*
output explanation 1st
n=24
n%10>=5 && printf("%d", (n/10+1)*10) || printf("%d", n/10*10);
24%10
4 >= 5 
false so it will not go forward with && operator 
Now, 
It will check other operator i.e ||
printf("%d", n/10*10);
24/10*10
2*10
20  => answer of n=24
*/

/*
output explanation 2nd
n=26
n%10>=5 && printf("%d", (n/10+1)*10) || printf("%d", n/10*10);
25%10
5 >= 5 
true so it will go forward with && operator to check next exp
Now, 
printf("%d", (n/10+1)*10)
(24/10+1)*10
2+1 => 3
3*10
30  => answer of n=26
it will not check the Or operator exp
*/