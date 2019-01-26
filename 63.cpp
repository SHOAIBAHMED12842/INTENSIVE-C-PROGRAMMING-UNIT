#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],j,k=1,l,max=0;
	for(j=0;j<5;j++)
	{
		printf("Enter %dth element of array=",k);
		scanf("%d",&a[j]);
		k++;
		if(a[0]>a[j])
		{
			a[0]=a[j];
		}	
		if(a[j]>max)
		{
		max=a[j];
		}
	}
	
printf("\nMinimum Number in the array is:%d",a[0]);
printf("\nMaximum Number in the array is:%d",max);
}

