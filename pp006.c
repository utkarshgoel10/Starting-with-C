#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ar[10],i;
	
	printf("Enter the numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);		
	}
	
	printf("\nEven numbers are: ");
	for(i=0;i<=10;i++)
	{
		if(ar[i]%2==0)
		printf("%d ",ar[i]);
	}
	
	return 0;
}
