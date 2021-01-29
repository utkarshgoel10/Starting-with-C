#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	
	printf("Enter numbers(press 0 to terminate): \n");
	scanf("%d",&n);
	while(n!=0){					
	if(n%2)
		printf("%d is Odd\n",n);
	else
		printf("%d is Even\n",n);	
		scanf("%d",&n);
	}
	
	return 0;
}
