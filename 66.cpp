#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("input the element to be stored in the array:");
	scanf("%d",&n);
	int arr[n-1],temp;
	for(i=0;i<=n-1;i++)
	{
		printf("Enter %dth element of array=",i);
		scanf("%d",&arr[i]);
	}
for(i=0;i<=n-1;i++)
{
	for(j=i+1;j<=n-1;j++)
{
	if(arr[i]<arr[j])
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
}
printf("\nElements in array after sorted in descending order is:");
for(j=0;j<=n-1;j++)
{
		printf("%d ",arr[j]);
	
}
}

