#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of numbers:");
	scanf("%d %d",&a,&b);
	if(a == b)
	{
		printf("Result is: %d = %d",a,b);
	}
	else if (a < b)
	{
		printf("Result is: %d < %d",a,b);
	}
	else 
	{
		printf("Result is: %d > %d",a,b);
	}
	return 0;
}
