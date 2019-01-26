#include<stdio.h>
#include<conio.h>
int main()
{
int num,a,temp,sum=0;

printf("\n enter number to check weather it is armstrong or not:");
scanf("%d",&num);
temp=num;

while(num>0)
{
a=num%10;
sum+=a*a*a;
num=num/10; 
}
if(sum==temp)
{
printf("\naramstrong number%d",temp);
}
else
{
	printf("\n%d not aramstrong number and sum of cubes of individual is %d",temp,sum);
}
}


