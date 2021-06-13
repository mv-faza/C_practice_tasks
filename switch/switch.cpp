#include<stdio.h>
int main()
{
	int week;
	printf("Choose day of the weeek (1-7):");
	scanf("%d",&week);
	
	switch (week)
	{
	 case 1:
	 	printf("Monday\n");
	 break;
	 case 2:
	 		printf("TuesdayThursday\n");
	 	break;
		 case 3:
		printf("Wednesday\n"); 	
		 break;
		
	    case 4:
		printf("Thursday\n"); 	
		 break;
		 case 5:
		printf("Friday\n"); 	
		 break;
		 case 6:
		printf("Saturday\n"); 	
		 break;
		 case 7:
		printf("Sunday\n"); 	
		 break;
		 default:
		
		 	printf("Enter number from 1 to 7\n");
		 }
		 	return 0;
		 
		
		
		
		
		
		
}
