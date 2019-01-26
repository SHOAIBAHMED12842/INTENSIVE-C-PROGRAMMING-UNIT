#include<stdio.h>
#include<math.h>
int main()
{
int dec=0,temp,i,inc=0,binary;

printf("\n enter binary number :");
scanf("%d",&binary);
temp=binary;

while(temp!=0)
{
i=temp%10;
dec=dec+(i*pow(2,inc));
temp=temp/10; 
inc++;
}

printf("\ndecimal number=%d",dec);
}



