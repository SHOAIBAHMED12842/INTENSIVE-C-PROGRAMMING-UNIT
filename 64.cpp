#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("input the element to be stored in the array:");
	scanf("%d",&n);
	int arr[n-1];
	for(i=0;i<=n-1;i++)
	{
		printf("Enter %dth element of array=",i);
		scanf("%d",&arr[i]);
	}
printf("\nThe Even elements are:");
for(j=0;j<=n-1;j++)
{
	if(arr[j]%2==0)
	{
			printf("%d ",arr[j]);
	}
}
printf("\nThe odd elements are:");
for(j=0;j<=n-1;j++)
{
	if(arr[j]%2==1)
	{
			printf("%d ",arr[j]);
	}
}
}

