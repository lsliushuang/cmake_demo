#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include<sys/time.h>
#include "process2.h"


 int usSleep(long us) 
 {
    struct timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = us;

    return select(0, NULL, NULL, NULL, &tv);
 }

int main(void)
{
    int i = 0; 
    //while(1)
    {
      system("date");
      for(i=0; i<1000; i++)
      {
          usSleep(2000);
      }
      system("date");

    }
    return 0;

}