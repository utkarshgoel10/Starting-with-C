#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,i;
	printf("Enter 2 numbers: ");scanf("%d%d",&n1,&n2);
	printf("\nEven Numbers are: ");
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
	
	
	return 0;
}
