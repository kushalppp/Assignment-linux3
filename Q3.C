#include<stdio.h>
#include<pthread.h>

void *eveninc(void *p)
{
  int i,j=0;
 printf(" even is =");
 for(i=0;i<=10;i++)
   {
    j=j+2;
   printf(" %d ",j);
  }
  }
 void *oddinc(void *p)
{
  int i,j=1;
 printf(" \n  odd is =");
 for(i=0;i<=10;i++)
   {
    j=j+2;
   printf(" %d ",j);
  }
  }

main()
{
pthread_t f1;
pthread_t f2;
int  ret1,ret2;
ret1=pthread_create(&f1,NULL,eveninc,NULL);
ret2=pthread_create(&f2,NULL,oddinc,NULL);
pthread_join(f1,NULL);
pthread_join(f2,NULL);
if(ret1==0 && ret2==0)
{
 printf("\nThread is created");
}
else
printf("NOT");
}

Output:-
even is = 2  4  6  8  10  12  14  16  18  20  22
 odd is = 3  5  7  9  11  13  15  17  19  21  23
Thread is created