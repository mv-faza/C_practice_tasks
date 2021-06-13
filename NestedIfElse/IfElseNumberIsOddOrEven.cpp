#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number for checking is it odd or even:");
	scanf("%d",&a);
	if (a%2 == 0)
	{
		printf("%d these number is even.",a);
	}
	else 
	{
		printf("%d these number is odd.",a);
	}
	return 0;
}




