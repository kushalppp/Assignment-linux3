#include<stdio.h>
#include<pthread.h>
#include<string.h>

void *inc(int p)
{
 int i;
printf(" Incrementing value\n");
for(i=1;i<=5;i++)
{
printf("%d\n",p);
 p++;
}
}

int main(int argc,char** argv)
{
pthread_t t1;
int f, i,ret1;
for(i=1;i<argc;i++)
{
f=atoi(argv[i]);
}
ret1=pthread_create(&t1,NULL,inc,f);
printf("Incrementing by Main\n");
for(i=1;i<=5;i++)
{
printf("%d",f);
f++;
}
pthread_join(t1,NULL);
if(ret1==0)
{
printf("\nThread is created");
}
else
printf("NOT");
}

Output:-
Incrementing by Main
 Incrementing value
1
2
3
4
5
12345
Thread is created
