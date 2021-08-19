#include<stdio.h>
#include<pthread.h>

 void *threadfunction(void *p)
{
 printf("I am threads function \n");
  }
main()
{
pthread_t f1,f2;
int  ret1,ret2;
ret1=pthread_create(&f1,NULL,threadfunction,NULL);
ret2=pthread_create(&f2,NULL,threadfunction,NULL);
if(ret1==0 && ret2==0)
{
printf("Thraed created successfully.\n");
printf("t1 PID is=%u\n",f1);
printf("PPID is =%d \n",getppid());
printf("t2 PID is=%u\n",f2);
}
else
{
printf("Thread not created.\n");
return 0;
}
}

Output:-
I am threads function
Thraed created successfully.
I am threads function
t1 PID is=4179494656
PPID is =7
t2 PID is=4171040512