#include<stdio.h>
#include<conio.h>
 
int main() 
{
    int i,j,rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
     
    for(i = rows; i > 0; i--) 
	{
    /* Prints one row of triangle */
        for(j = i; j > 0; j--) 
		{
           printf("* ");
        }
        printf("\n");
    }
    
   
}
