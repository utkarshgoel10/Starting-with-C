#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter number: ");scanf("%d",&n);	
	if(n&1)
		printf("\n%d is Odd",n);
	else
		printf("\n%d is Even",n);	
	return 0;
}
