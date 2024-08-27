//alphabets upper-lower combination square pattern program

#include<stdio.h>
void main()
{
    int nr, nc, i, j;
    printf("\nEnter no of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
           if(i%2==0)
           {
            printf("%2c", j+96);
           }else{
            printf("%2c", j+64);
           }
        }
        printf("\n");
    }
}

/*
Enter no of rows and columns: 4
26
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
*/
