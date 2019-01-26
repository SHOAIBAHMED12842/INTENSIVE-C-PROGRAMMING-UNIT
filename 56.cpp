#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3],j;
		
		printf("\nInput 3 elements of array\n");
	for(j=0;j<=2;j++)
	{
		printf("Enter %d element of array=",j);
		scanf("%d",&arr[j]);
	}
	printf("\nvalues store in array are:");
	for(j=0;j<=2;j++)
	{ 
	printf(" %d",arr[j]);
	}
	printf("\nvalues store in array in reverse are:");
	for(j=2;j>=0;j--)
	{ 
	printf(" %d",arr[j]);
	}
}

