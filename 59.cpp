#include<stdio.h>
#include<conio.h>
int main()
{
	int  i[10],j,k,l,n,count=0;
		printf("Enter the number of to be stored in the array:");
		scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("Enter %d element of array=",j+1);
		scanf("%d",&i[j]);
	}

	for(j=0;j<n;j++)
	{
		for(l=j+1;l<n-1;l++)
		{
			if(i[j]==i[l])
		 {
		 	++count;
		 	break;
		 }
		}	 
	}
	printf("Total number of duplicate elements found in array=%d:",count);
}

