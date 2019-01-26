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
if(temp==rev)
{
	printf("\n plaindrome no:%d",rev);
}
else
{
	printf("\n not plaindrome no reverse is %d",rev);
}
}


