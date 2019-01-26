#include<stdio.h>
#include<conio.h>
int main()
{
	int i[10],j,sum=0,k=1;
	for(j=0;j<10;j++)
	{
		printf("Enter %dth element of array=",k);
		scanf("%d",&i[j]);
		sum+=i[j];
		k++;
	}
	printf("\nSum of all array=%d",sum);
}

