#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <syslog.h>
#include <string.h>
#include<dirent.h>
int main()
{

	DIR *d;
	struct dirent *dir;
	char* arr[300];
	int fd=creat("a.txt",S_IRWXU|S_IWUSR|S_IRGRP|S_IROTH);
        printf("fd  = %d\n",fd);
	

	d = opendir(".");

    	  if(d)
	  {	int i=0;
	  	while ((dir = readdir(d)) != NULL)
		{
	            printf("%s\n", dir->d_name);
		    arr[i]=dir->d_name;
		    i++;
			
	        }

		int fd = open("a.txt",O_RDWR);
		if (fd != -1)
		 {
        	 	write(fd, arr, sizeof(arr));
			printf("\ncontents written successfully.\n");
			Read(fd, &arr,sizeof(arr));
			printf("\nContents of file are:\n",arr);
        		close(fd);
   		 }
		
		
		
        closedir(d);

    	}

	

return 0;
}
