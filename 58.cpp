#include<stdio.h>
#include<conio.h>
int main()
{
	int j,k=1,n,l=1;
		printf("Enter the length of both arrays:");
		scanf("%d",&n);
		int i[n-1];
		printf("\nOriginal array\n");
	for(j=0;j<=n-1;j++)
	{
		printf("Enter %d element of array=",k);
		scanf("%d",&i[j]);
		k++;
	}
	printf("\nCopied array");
	for(j=n-1;j>=0;j--)
	{ 
		printf("\n%d element of array=%d",l,i[j]);
		l++;
	}
	
}

