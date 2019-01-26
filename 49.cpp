#include<stdio.h>
#include<math.h>
int main()
{
int dec=0,temp,i,inc=0,octal;

printf("\n enter octal number :");
scanf("%d",&octal);
temp=octal;

while(temp!=0)
{
i=temp%10;
dec=dec+(i*pow(8,inc));
temp=temp/10; 
inc++;
}

printf("\ndecimal number=%d",dec);
}



