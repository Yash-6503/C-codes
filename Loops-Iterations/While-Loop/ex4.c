//printing n odd numbers using while loop

#include<stdio.h>
void main()
{
    int n, i=1;
    printf("\nEnter a number: "); scanf("%d", &n);
    while(i<n-1)
    {
        printf("%4d", i+=2);
    }
}


/*
Enter a number: 10
   3   5   7   9
*/

/*
Enter a number: 100
   03   5   7   9  11  13  15  17  19  21  23  25  27  29  31  33  35  37  39  41  43  45  47  49  51  53  55  57  59  61  63  65  67  69  71  73  75  77  79  81  83  85  87  89  91  93  95  97  99
*/