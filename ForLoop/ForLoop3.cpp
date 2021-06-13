#include<stdio.h>
int main()
{
	int a,count,sum=0;
	printf("Enter positive integer:");
	scanf("%d",&a);
	for (count=1;count<=a;++count)
	{
		sum+=count;
	}
	printf("Sum=%d",sum);
	return 0;
}
