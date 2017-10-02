#include<stdio.h>
#include<pthread.h>

void *fun1(void *p)
{
	printf("\nInside Thread 1");
	
	printf("\nthread 1 treminated.");
	pthread_exit(NULL);
	
}


void *fun2(void *p)
{
	printf("\nInside Thread 2");
	
	printf("\nthread 2 treminated.");
	pthread_exit(NULL);
	
}


void *fun3(void *p)
{
	printf("\nInside Thread 3");
	
	printf("\nthread 1 treminated.");
	pthread_exit(NULL);
	
}


void *fun4(void *p)
{
	printf("\nInside Thread 4");
	
	printf("\nthread 4 treminated.");
	pthread_exit(NULL);
	
}

int main()
{
	printf("\nMain thread start");
	pthread_t thread1,thread2,thread3,thread4;
	int ret;

	ret=pthread_create(&thread1,NULL,fun1,NULL);
	ret=pthread_create(&thread2,NULL,fun2,NULL);
	ret=pthread_create(&thread3,NULL,fun3,NULL);
	ret=pthread_create(&thread4,NULL,fun4,NULL);
	
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	pthread_join(thread3,NULL);
	pthread_join(thread4,NULL);

	wait();
	printf("\nMain thread terminated\n");
	pthread_exit(NULL);

	return 0;
}
	
