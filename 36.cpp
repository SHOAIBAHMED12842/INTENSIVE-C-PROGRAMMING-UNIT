#include<stdio.h>
#include<conio.h>
int main()
{
	int range,num1=0,num2=1,num3,i=3;
		printf("\n\tFibonacci series");
		printf("\nEnter range=");
		scanf("%d",&range);
		printf(" %d",num1);
			printf(" %d",num2);
	while(i<=range)
	{
		num3=num1+num2;
		num1=num2;
		num2=num3;
		printf(" %d",num3);
			i++;
	}
		
}

