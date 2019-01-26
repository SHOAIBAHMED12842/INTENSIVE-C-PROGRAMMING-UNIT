#include<stdio.h>
#include<conio.h>
int main()
{
int num,a,b,temp1,temp2,sum=0;

printf("\n enter range of armstrong no:");
scanf("%d",&num);

for(a=1;a<=num;a++)
{
sum=0;
temp1=a;
temp2=a;
while(temp1>0)
{
b=temp1%10;
sum+=(b*b*b);
temp1=temp1/10; 
}
if(sum==temp2)
{
printf("\n%d",sum);
}
}
}

