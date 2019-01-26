#include<stdio.h>
int main()
{
	int arr[3][3],i,j,k,l,value1,value2,value3,sum;
	printf("Enter matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Matrix is");
	printf("\n%d\t",arr[0][0]);
		printf("%d\t",arr[0][1]);
			printf("%d\n",arr[0][2]);
				printf("%d\t",arr[1][0]);
					printf("%d\t",arr[1][1]);
						printf("%d\n",arr[1][2]);
							printf("%d\t",arr[2][0]);
								printf("%d\t",arr[2][1]);
									printf("%d",arr[2][2]);
	value1=arr[0][0];
	value2=arr[1][1];
	value3=arr[2][2];
	sum=value1+value2+value3;
	printf("\nSum of diagonal of matrix is:%d",sum);
}
