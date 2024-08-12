/*
Question: A Shop keeper buys a bat at 5000rs for gripping he
invested 490rs for stickering he invested 270rs now he want 
to make 27% profit on total cost now your task is to find what 
is 	the total cost of that bat and you have to print how much 
he invested for what (gripping: 490rs, stickering 270rs) and 
what is the selling price and as per indias new rule GST is
2.56% calculate the print 

sample output:
original price=5000rs
gripping =490rs
stickering=270rs
total Cost=5760.00(After adding the invested money)
selling price=7315.200rs
GST=187.27(calculate the GST from the Selling price)
*/

#include<stdio.h>
void main()
{
    int cp, grp, stk;
    float sp, tc, profit, gst, Tgst;

    printf("\nEnter a cost price: ");
    scanf("%d", &cp);
    printf("\nEnter money spend on gripping & stickering: ");
    scanf("%d%d", &grp, &stk);
    printf("\nEnter a profit percent: ");
    scanf("%f", &profit);
    printf("\nEnter a GST percent: ");
    scanf("%f", &gst);

    printf("\nOriginal Price is %d", cp);
    printf("\nMoney spend on Gripping is %d", grp);
    printf("\nMoney spend on Stickering is %d", stk);

    tc = cp + grp + stk;
    printf("\nTotal Cost is %.2f", tc);

    sp = (tc / 100) * profit + tc;
    printf("\nSelling price is %.3f", sp);

    Tgst = (sp / 100) * gst;
    printf("\nGST is %.2f", Tgst);
}

/*
Enter a cost price: 5000

Enter money spend on gripping & stickering: 490
270

Enter a profit percent: 27

Enter a GST percent: 2.56

Original Price is 5000
Money spend on Gripping is 490
Money spend on Stickering is 270
Total Cost is 5760.00
Selling price is 7315.200
GST is 187.27
*/