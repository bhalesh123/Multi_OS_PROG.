#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("\nits parent process.\n");
	if(fork()==0)
	{
		printf("\ni am first child process.");
		
		
		
	}
	wait(3);
	if(fork()==0);
		{
			printf("\ni am second child process.\n");
		}
	return 0;
}
