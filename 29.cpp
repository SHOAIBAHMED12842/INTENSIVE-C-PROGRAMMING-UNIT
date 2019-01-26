#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,j,sum;

printf("\n enter number:");
scanf("%d",&num);
printf("perfect no betweem 1 and %d are:",num);
for(i=1;i<=num;i++)
{  
  sum=0;
  for(j=1;j<i;j++)
  {
  		if(i%j==0)
	{
		sum+=j;
	}
  }
  if(sum==i)
{
	printf("\t%d",i);
}
}

}


