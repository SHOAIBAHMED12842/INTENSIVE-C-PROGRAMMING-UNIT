#include <stdio.h>

int main()
{
    int i, j,rows;
 
    /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow rhombus */
        for(j=1; j<=rows; j++)
        {
            if(i==1 || i==rows  || j==1|| j==rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
