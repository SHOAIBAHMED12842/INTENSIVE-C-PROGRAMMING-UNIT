#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("1st number:");
	scanf("%d",&a);
	printf("2nd number:");
	scanf("%d",&b);
	printf("3rd number:");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("The 1st number is the greatest among three");
	}
	else if(b>a&&b>c)
	{
			printf("The 2nd number is the greatest among three");
	}
	else
	{
		printf("The 3rd number is the greatest among three");
	}
}
