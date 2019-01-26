#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,count=0;

printf("\n enter number to check weather it is prime or not:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{  
 if(num%i==0)
 {
 	count++;
 }
}
  	if(count==2)
	{
		printf("\n %d is prime no",num);
	}
  else
  {
  	printf("\n %d is not prime no:",num);
  }
  


}


