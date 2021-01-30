#include<stdio.h>

struct validator
{
	unsigned n:1;
};

int main()
{
	struct validator chk;
	int num;
	printf("Enter a number: ");scanf("%d",&num);
	chk.n=num;
	
	if(chk.n)
		printf("%d is Odd",num);
	else
		printf("%d is Even",num);		
}
