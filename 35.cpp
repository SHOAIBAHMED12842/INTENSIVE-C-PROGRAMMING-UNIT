#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,count=0,j;
		printf("\nEnter range=");
		scanf("%d",&num);
	printf("prime no betweem 1 and %d are:",num);
	for(i=1;i<=num;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf(" %d",i);
		}
	}	
}

