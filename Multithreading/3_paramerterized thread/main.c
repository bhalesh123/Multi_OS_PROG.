#include<stdio.h>
#include<pthread.h>

void *fun(void *p)
{
	int q;
	q=(int *)p;
	
	printf("\nInside Thread1.");
	printf("\nparameter from main thread is %d\n",q);
	
	pthread_exit(NULL);
	
}

int main()
{
	
	pthread_t thread1;
	int arg=12;
	int ret;
	ret=pthread_create(&thread1,NULL,fun,(void*)arg);

	pthread_join(thread1,NULL);
	pthread_exit(NULL);

	return 0;
}
	
