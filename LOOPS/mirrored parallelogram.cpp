#include <stdio.h>

int main()
{
    int i, j, rows, col;

    /* Input number of rows and columns */
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &col);


    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=col; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
