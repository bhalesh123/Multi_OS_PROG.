#include<stdio.h>
#include<pthread.h>

void *fun(void *p)
{
	printf("\nInside Thread 1");
	
	pthread_exit(NULL);
	
}

int main()
{
	
	pthread_t thread1;
	int ret;
	ret=pthread_create(&thread1,NULL,fun,NULL);

	pthread_join(thread1,NULL);
	pthread_exit(NULL);

	return 0;
}
	
