#include<stdio.h>
int main()
{
	int i=1,j,k,n,sum=0,sum1=1;
	printf("series is 1+11+111+1111+..............");
	printf("\ninput the number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=sum1;
		printf("%d+",sum1);
		sum1=sum1*10;
		sum1++;
		
	}
	printf("\nthe sum is:%d",sum);
}
