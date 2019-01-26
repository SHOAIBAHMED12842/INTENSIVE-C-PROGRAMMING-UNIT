#include<stdio.h>
int main()
{
	int num,num2,i,sum=0;
	printf("enter number of terms=");
	scanf("%d",&num);
	num2=num*2;
	for(i=1;i<=num2;i++)
	{
		if(i%2==0)
		{
			printf(" %d",i);
			sum+=i;
		}
	}
	printf("\nsum of even number upto %d=%d",num,sum);
}
