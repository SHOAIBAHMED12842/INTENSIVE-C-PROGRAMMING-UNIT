#include<stdio.h>
int main()
{
 long int dec,rem,i=1,quo,j,temp;
 
char hexa[100];

printf("\n enter decimal number :");
scanf("%ld",&dec);
quo=dec;

while(quo!=0)
{
temp=quo%16;
if(temp<10)
{
	temp=temp+48;
}
else
{
	temp=temp+45;
	hexa[i++]=temp;
	quo=quo/16;
}

}

printf("\nhexadecimal number=");
for(j=i-1;j<0;j--)
{
	printf("%c",hexa[j]);
}
}



