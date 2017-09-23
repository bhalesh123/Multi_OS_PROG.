#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
int main()
{
	int pid1=getppid();
	int pid2=getpid();
	int pid3=getpid();
	printf("\nits process 1.parent process.pid is:%d\n",pid1);
	
			
	if(fork()==0)
	{
		printf("\nits child process 2.pid is:%d\n",pid2);
		kill(pid2,SIGTERM);
		
		
				
	}
	if(fork()==0)
	{
		printf("\nits child process 3.pid is:%d\n",pid3);
		kill(pid3,SIGTERM);
		
		
				
	}
		kill(pid1,SIGTERM);
	
	
return 0;	
}
