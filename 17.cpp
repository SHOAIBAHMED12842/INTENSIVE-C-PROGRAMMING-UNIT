#include<stdio.h>
#include<conio.h>
int main()
{
	int num,factorial=1,num1=1;
	printf("Enter a number to be factorail=");
	scanf("%d",&num);
	while(num1<=num)
	{
	factorial=factorial*num1;
	num1++;
	}
          printf("Factorial of %d!=%d",num,factorial);
	
}


