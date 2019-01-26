#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{ 
		 if(j==1||j==3||j==5)
		 {
		 		printf("1");
		 }
		 
		else if(j%2==0)
		 { 
		 	if(j==2)
		 {
		 		printf("01");
		 }
		 if(j==4)
		 {
		 		printf("0101");
		 }
		 }
		}
		printf("\n");
	}
}
