#include <stdio.h> 
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int n,i;
	
	if(argc==1)
		{
			printf("Please provide the number");
				
		}
		else
		{
		
		for(i=1;i<argc;i++)
		{
			n = atoi(argv[i]); 	

			if(n%2==0)
				printf("\n%d is Even",n);
			else
				printf("\n%d is Odd",n);	
			
		}
		}
		
	return 0;
		
}
