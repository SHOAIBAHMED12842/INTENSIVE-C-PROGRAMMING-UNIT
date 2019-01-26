#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],j;
		
		printf("\nInput 10 elements of array\n");
	for(j=0;j<=9;j++)
	{
		printf("Enter %d element of array=",j);
		scanf("%d",&arr[j]);
	}
	printf("elements of array are:");
	for(j=0;j<=9;j++)
	{ 
	printf(" %d",arr[j]);
	}
	
}

