#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t childPid;  
childPid = fork();

if(childPid == 0)  
{   
   printf("\ni am child");
   
}

else if(childPid < 0)   
{    
   printf("\nfork failed");
}

else   
{    
    int returnStatus;    
    waitpid(childPid, &returnStatus, 0);  

    if (returnStatus == 0)  
    {
       printf("\nThe child process terminated normally.");    
    }

    if (returnStatus == 1)      
    {
       printf("\nThe child process terminated with an error!.");    
    }
printf("\nparent process terminates\nc.");
}
return 0;
}
