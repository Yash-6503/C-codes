//number forwrad-reverse Square pattern program

#include<stdio.h>
void main()
{
    int nr, nc, i, j, a=1;
    printf("\nEnter no of rows and columns: ");
    scanf("%d %d", &nr, &nc);
    for(i=1; i<=nr; i++)
    {
        for(j=1; j<=nc; j++)
        {
            if(i%2==0)
            {
                printf("%3d",--a);
            }
            else{
                printf("%3d",a++);
            }
        }
        printf("\n");
    }
}


/*
Enter no of rows and columns: 4
5
  1  2  3  4  5     -> forward
  5  4  3  2  1     -> reverse
  1  2  3  4  5
  5  4  3  2  1
*/