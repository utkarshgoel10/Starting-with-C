#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter number: ");scanf("%d",&n);
	switch(n%2)
	{
		case 0:
			{
				printf("\n%d is Even",n);
				break;
			}
		default:	
			{
				printf("\n%d is Odd",n);
			}	
	}	
	
	return 0;
}
