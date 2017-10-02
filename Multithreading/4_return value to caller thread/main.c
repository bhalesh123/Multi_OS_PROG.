#include<stdio.h>
#include<pthread.h>

void *fun(void *p)
{
	int a,b,ans;
	
	printf("\nInside Thread1.");
	printf("\naaddition");
	printf("\nEnter A=");
	scanf("%d",&a);
	printf("\nEnter B=");
	scanf("%d",&b);
	ans=a+b;
	

	return (void *)ans;
	pthread_exit(&ans);
	
}

int main()
{
	
	pthread_t thread1;
//	int arg=12;
	void* stat;
	int ret;
	ret=pthread_create(&thread1,NULL,fun,NULL);

	pthread_join(thread1,&stat);
	printf("\nInside main thread.\n");
	printf("\nans is:%d\n",(int *)stat);
	pthread_exit(NULL);

	return 0;
}
	
