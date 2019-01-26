#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
   switch(num%2==0)
   {
   case 0:
   		printf("\n%d is odd",num);
   		break;
   	case 1:
   		printf("\n%d is even",num);
   		break;	
   }
	
}
