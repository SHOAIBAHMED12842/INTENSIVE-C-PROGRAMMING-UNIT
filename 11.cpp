#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,result=0;
	char calcu;
	printf("Enter two numbers:");
	scanf("%f%f",&a,&b);
	printf("Enter the operation:");
	calcu=getche();
   switch(calcu)
   {
   	case '+':result=a+b;printf("\nresult=%.0f",result);
   		break;
	   case '-':result=a-b;printf("\nresult=%.0f",result);
   		break;
   		case '*':result=a*b;printf("\nresult=%.0f",result);
   		break;
		   case '/':result=a/b;printf("\nresult=%.2f",result);
   		break;
   		default:
   			printf("\nInvalid");
   		break;
   }
}
