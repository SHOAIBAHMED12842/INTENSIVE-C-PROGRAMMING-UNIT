#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0;
	for(i=100;i<=200;i++)
	{
		if(i%9==0)
		{
			printf("%d\n",i);
			sum+=i;
		}
	}
	printf("sum is %d",sum);
}
