#include<stdio.h>
int main()
{   int i,j,k,count=4,temp=1;
	for(i=1;i<=5;i++)
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
		int co=1,tem=1+(4-1)*2;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=co;j++)
		{ 
		 	printf(" ");
		}
		for(k=1;k<=tem;k++)
		{
			printf("*");
		}
		co++;
		tem-=2;
		printf("\n");
	}
}
