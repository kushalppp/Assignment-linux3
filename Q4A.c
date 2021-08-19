#include<stdio.h>
#include<pthread.h>
#include<string.h>

void *inc(int p)
{
printf(" Incrementing value\n");
while(1)
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
pthread_join(t1,NULL);
if(ret1==0)
{
printf("Thread is created");
}
else
printf("NOT");
}

Output:-
COMMAND LINE:-  ./q4 1
 Incrementing value
1
2
3
4
5
6
7
8
9
for exit press CTRL+C