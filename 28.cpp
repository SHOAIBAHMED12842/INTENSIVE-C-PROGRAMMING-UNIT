#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,sum=0;

printf("\n enter number to check weather it is perfect or not:");
scanf("%d",&num);
printf("positive diviser:");
for(i=1;i<num;i++)
{
	if(num%i==0)
	{
		sum+=i;
			printf("\t%d",i);
	}
}
if(sum==num)
{
	printf("\nperfect number %d",num);
}
else
{
	printf("\nnot perfect number %d diviser %d",num,sum);
}

}


