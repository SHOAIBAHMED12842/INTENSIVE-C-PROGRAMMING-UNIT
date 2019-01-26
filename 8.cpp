#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers:\n\t");
	scanf("%d%d",&num1,&num2);
   switch(num1>num2)
   {
   	case 0:
   		printf("\n%d is maximum",num2);
   		break;
   	case 1:
   		printf("\n%d is maximum",num1);
   		break;	
   }
	
}
