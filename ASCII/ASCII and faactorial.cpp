 /*#include<stdio.h>
int main()
{
	char a;
	printf("enter any character=");
	scanf("%c",&a);
	printf("the ASCII value of %c is %d",a,a);
	
	
	return 0;
} */
#include<stdio.h>
int main()
{
	
	int a,i,fact=1;
	printf("enter any number=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
		
	}
	
	
	printf("the factorial of %d is %d",a,fact);
	return 0;
	
}
