#include<stdio.h>
#include<conio.h>
int main()
{
int num,temp,i,rev=0;

printf("\n enter number:");
scanf("%d",&num);
temp=num;
while(num>0)
{
	i=num%10;
	rev=rev*10+i;
	num=num/10;
}
printf("\n reverse  number:%d",rev);
}


