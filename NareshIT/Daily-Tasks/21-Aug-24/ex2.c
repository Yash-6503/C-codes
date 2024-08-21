/*
2.
Write a C program that will ask for a person’s name and his/her game 
score. Then it will ask for a second person’s name and score. 
The program will print the winner’s name and also print by how many 
points that person won by comparing the scores. Develop this program 
by using switch case.
*/

#include<stdio.h>
void main()
{
    char name1[10], name2[10];
    int score1, score2;
    printf("\nEnter 1st person name: ");
    scanf("%s", name1);
    printf("\nEnter 1st person score: ");
    scanf("%d", &score1);
    printf("\nEnter 2nd person name: ");
    scanf("%s", name2);
    printf("\nEnter 2nd person score: ");
    scanf("%d", &score2);
    if(score1 == score2)
    {
        printf("\nBoth are Winners %s & %s", name1, name2);
        printf("\n%s & %s wins by equal[%d] points", name1, name2, score1);
        return;
    }
    switch(score1 > score2)
    {
        case 1:
            printf("\nWinner is %s", name1);
            printf("\n%s wins by %d points than %s", name1, score1-score2, name2);
            break;

        default:
            printf("\nWinner is %s", name2);
            printf("\n%s wins by %d points than %s", name2, score2-score1, name1);
    }
}

/*
Enter 1st person name: yash

Enter 1st person score: 90

Enter 2nd person name: kiran

Enter 2nd person score: 60

Winner is yash
yash wins by 30 points than kiran
*/

/*
Enter 1st person name: yash

Enter 1st person score: 60

Enter 2nd person name: kiran

Enter 2nd person score: 90

Winner is kiran
kiran wins by 30 points than yash
*/

/*
Enter 1st person name: yash

Enter 1st person score: 80

Enter 2nd person name: kiran

Enter 2nd person score: 80

Both are Winners
yash and kiran wins by 80 equal points
*/