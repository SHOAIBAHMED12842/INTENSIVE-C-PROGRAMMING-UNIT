#include<stdio.h>
int main()
{ int  arr[10],i,freq[10],j,n,count=0;
		printf("Enter the number of to be stored in the array:");
		scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter %d element of array=",i+1);
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<=n-1;i++)
	{   count=1;
		for(j=i+1;j<=n-1;j++)
		{
			if(arr[i]==arr[j])
		 {
		 	count++;
		 	freq[j]=0;
		 }
		}
		if(freq[i]!=0)	
		{
			freq[i]=count;
		 } 
	}
	printf("\nFrequency of all elements found in array\n");
	for(i=0;i<=n-1;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times\n",arr[i],freq[i]);
		}
	}
}
