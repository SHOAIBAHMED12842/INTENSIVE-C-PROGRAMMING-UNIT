#include<stdio.h>
#include<conio.h>
int main()
{
	char alpha;
	printf("Enter the alphabet:");
	alpha=getche();
   switch(alpha)
   {
   	case 'a':case 'A':
   		case 'e':case 'E':
   			case 'i':case 'I':
   				case 'o':case 'O':
   					case 'u':case 'U':
   		printf("\nVOWEL");
   		break;
   		default:
   			printf("\nCONSONANT");
   		break;
   		
   }
	
}
