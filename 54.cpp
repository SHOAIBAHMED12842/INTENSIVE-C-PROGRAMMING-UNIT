#include<stdio.h>
int main()
{   int i,j,k=0,count=1;
	for(i=7;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{ 
		 	printf("%c",j+64);
		}
		if(i!=7)
		{
			for(k=1;k<=count;k++)
		{
			printf(" ");
		}
		count+=2;
		}
			for(j=i;j>=1;j--)
			{
			if(j!=7)	
			printf("%c",j+64);
			}
			printf("\n");
	}
	printf("\n");
}
