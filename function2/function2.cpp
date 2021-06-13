#include<stdio.h>
int max(int num1,int num2);
int main()
{
	int a = 100;
	int b = 200;
	int c;
	c = max(a,b);
	printf (" Max value is : %d\n", c );
	return 0;
}
int max(int num1,int num2)
{
	int c ;
	if (num1 > num2) c=num1;
	else c = num2;
	return c;
}
