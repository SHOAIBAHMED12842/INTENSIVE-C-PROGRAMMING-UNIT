#include<stdio.h>
#include<conio.h>
int main()
{ 
int a=3,b=1,i,j,k;

for(i=1;i<=4;i++)
{
for(j=1;j<=a;j++)
{
printf("");
}
a--;
for(k=1;k<=b;k++)
{
	printf("*");
}
b=b+2;
printf("\n");
}
}


