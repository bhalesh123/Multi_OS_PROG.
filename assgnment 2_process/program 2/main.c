#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
int main()
{
	int pid0=getppid();
	int pid1=getpid();	
	int pid2=getpid();
	printf("\nits parent process.\n");
	
	if(fork()==0)
	{
		printf("\nits first child process.");
		
	
		
		if(fork()==0);
		{
			printf("\ni am second child process.\n");
			kill(pid2,SIGTERM);
			
			
		}
		kill(pid1,SIGTERM);
		
		
	}
	kill(pid0,SIGTERM);
	return 0;
}
