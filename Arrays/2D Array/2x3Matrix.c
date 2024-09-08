/*
Write a C Program to find 2x3 Matrix 
*/

#include<stdio.h>
void main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    printf("\na value = %u, \na[0] row addr = %u, \na[1] row addr = %u", a, a[0], a[1]);
    printf("\n2x3 Matrix is: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
        printf("%2d", a[i][j]);
        }
        printf("\n");
    }
}

/*
a value = 2489645104, 
a[0] row addr = 2489645104, 
a[1] row addr = 2489645116
2x3 Matrix is: 
 1 2 3
 4 5 6
*/