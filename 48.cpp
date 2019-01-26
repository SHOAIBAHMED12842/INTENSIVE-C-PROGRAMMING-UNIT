#include<stdio.h>
#include<math.h>
int main()
{
int dec,temp,i,j=1,octal=0;

printf("\n enter decimal number :");
scanf("%d",&dec);
temp=dec;

while(temp!=0)
{
i=temp%8;
octal=octal+(i*j);
temp=temp/8; 
j=j*10;
}

printf("\noctal number=%d",octal);
}



