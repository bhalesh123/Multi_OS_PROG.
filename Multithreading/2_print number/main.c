#include<stdio.h>
#include<pthread.h>

void *fun1(void *p)
{
	int i;
	printf("\nInside Thread 1");
	for(i=1;i<=500;i++)	
	{
		printf("%d\n",i);
	}
	
	pthread_exit(NULL);
	
}
void * fun2(void *p)
{
	int i;
	printf("\nInside Thread 2");
	for(i=500;i>=1;i--)	
	{
		printf("%d\n",i);
	}
	
	pthread_exit(NULL);	
}

int main()
{
	
	pthread_t thread1,thread2;
	int ret;
	ret=pthread_create(&thread1,NULL,fun1,NULL);
	ret=pthread_create(&thread2,NULL,fun2,NULL);

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	pthread_exit(NULL);

	return 0;
}
	
