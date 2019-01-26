#include<stdio.h>
#include<conio.h>
int main()
{
	int bi1,bi2,bi3,bi4,bn1,bn2,bn3,bn4,dec;
	
	printf("\n\t\tWELCOM TO BINARY TO DECIMAL CONVERSION");
	
	printf("\nEnter Four binary digit number");
	
	printf("\nEnter first number:");
	  scanf("%d",&bi1);
	printf("\nEnter second number:");
	     scanf("%d",&bi2);
	printf("\nEnter third number:");
	        scanf("%d",&bi3);
	printf("\nEnter four number:");
	          scanf("%d",&bi4);
				if((bi1==0||bi1==1)&&(bi2==0||bi2==1)&&(bi3==0||bi3==1)&&(bi4==0||bi4==1))
				
{
	bn1=bi1*1;
		bn2=bi2*2;
			bn3=bi3*4;
				bn4=bi4*8;
				dec=bn1+bn2+bn3+bn4;
printf("\n\tBINARY TO DECIMAL IS=%d",dec);
}
else
	{
printf("\n\tINVALID NUMBER");
}
}

