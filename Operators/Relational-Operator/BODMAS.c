//BODMAS operator priority operations
#include<stdio.h>
int main()
{
    printf("%d", 2+5/3+2 == 5);     //1
    printf("\n%d", 5+3/2==4);       //0
    printf("\n%d", (5+3)/2==4);       //1
    printf("\n%d", 5-3+2==0);       //0
    printf("\n%d", 5-(3+2)==0);       //1
    printf("\n%d", 5*3/2==7);       //1
    printf("\n%d", 'a'/'b' == 0);       //1
    printf("\n%d", 2+3*4+5 == 19);       //1
    printf("\n%d", 2+3*4+5 == 25);       //0
    printf("\n%d", 2+3*4+5 == 45);       //0
    printf("\n%d", (2+3)*(4+5) == 45);       //1
    printf("\n%d", printf("I Love You") == printf("I Hate You"));   //ILoveYou IHateYou1
    printf("\n%d", "I Love You" == "I Hate You");       //0
    printf("\n");
}