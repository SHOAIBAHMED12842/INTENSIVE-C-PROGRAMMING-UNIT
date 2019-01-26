#include<stdio.h>
int main()
{
	int i,j,k,count=3,temp=1;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=count;j++)
		{ 
		 	printf(" ");
		}
		for(k=1;k<=temp;k++)
		{
			printf("*");
		}
		count--;
		temp+=2;
		printf("\n");
	}
}
