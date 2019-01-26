#include<stdio.h>
#include<conio.h>
int main()
{
	int month;
	printf("Name the month number:");
	scanf("%c",&month);
   switch(month)
   {
   	case 2:
   		printf("\n29 DAYS");
   		break;
   		case 4:
		case 6:
		case 9:
		case 11:
   		printf("\n30 DAYS");
   		break;
   		case 1:
		   case 3:
		   case 5:
		   	case 7:
		   		case 8:
		   			case 10:
		   				case 12:
   		printf("\n31 DAYS");
   		break;
   		default:
   			printf("INVALID OUTPUT");
   			break;
   }
	
}
