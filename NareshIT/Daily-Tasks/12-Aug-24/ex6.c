/*
Question: Write a c program that will find the medals of the based 
on some criteria that is total 5 levels are there for each level 
the player get one medal that if the level total marks are 10 if 
player got points more that 6-10 he will get the gold in the 
level or if player got points 1-5 he will get silver medal.
Without using control flow statements.
Note::the points you have to read from the user through scanf.
sample input: 4 5 9 8 2
sample output: player got 2 gold and 3 silver medals
*/

#include<stdio.h>
void main()
{
    int l1, l2, l3, l4, l5, GOLD, SILVER;
    printf("\nEnter 5 levels points: ");
    scanf("%d%d%d%d%d", &l1, &l2, &l3, &l4, &l5);
     
    GOLD = (l1 >= 6 && l1 <=10) + (l2 >= 6 && l2 <=10) + (l3 >= 6 && l3 <=10) + (l4 >= 6 && l4 <=10) + (l5 >= 6 && l5 <=10);
    SILVER = 5 - GOLD;

    printf("\nplayer got %d gold and %d silver medals", GOLD, SILVER);
}


/*
Enter 5 levels points: 4
5
9
8
2

player got 2 gold and 3 silver medals
*/