#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,imag,dis;
	printf("Enter a,b,c:\n");
	scanf("%f%f%f",&a,&b,&c);
	dis=(b*b)-(4*a*c);
		printf("\n%f",dis);
   switch(dis>0)
   {
   	case 1:
   		root1=(-b+sqrt(dis))/(2*a);
   		root2=(-b-sqrt(dis))/(2*a);
   		printf("\nroots are real");
   		printf("\nroot1=%.2f,root2=%.2f",root1,root2);
   		break;
   }
	   	switch(dis==0)
	   	{
	   		case 0:
	   			printf("\nroots are complex");
	   			break;
	   			case 1:
				  root1=root2=-b*(2*a);
				  printf("\nroots are equal");
				   printf("\nroot1=%.2f,root2=%.2f",root1,root2);
   		break;
		   }
}
