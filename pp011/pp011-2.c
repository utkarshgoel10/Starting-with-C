#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter number: ");scanf("%d",&n);
	iseven(n)?printf("\n%d is Even",n):printf("\n%d is Odd",n);
	return 0;
}
