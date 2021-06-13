#include <stdio.h>

int main()
 {
int arr1[10], arr2[10], arr3[10];
int i,j=0,k=0,n;
printf("\n\nodd and even integers :\n");
printf("------------------------------------------------------\n");	
printf("enter the number of elements  :");
scanf("%d",&n);
printf("enter %d elements  :\n",n);
for(i=0;i<n;i++)
{
printf("element - %d : ",i);
scanf("%d",&arr1[i]);
}
for(i=0;i<n;i++)
{
if (arr1[i]%2 == 0)
{
arr2[j] = arr1[i];
j++;
}
else
{
arr3[k] = arr1[i];
k++;
}
}
printf("\neven elements are : \n");
for(i=0;i<j;i++)
{
printf("%d ",arr2[i]);
}
printf("\nodd elements are :\n");
for(i=0;i<k;i++)
{
printf("%d ", arr3[i]);
}
printf("\n\n");	
return 0;
}
