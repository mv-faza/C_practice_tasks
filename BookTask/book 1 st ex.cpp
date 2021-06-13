#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main()
{
int x;
for(x=LOWER; x<=UPPER; x=x+STEP)
	printf("%6d %6.f\n",x,(5.0/9.0)*(x-32));
return 0;
}
