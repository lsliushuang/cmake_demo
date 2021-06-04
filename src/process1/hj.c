#include <stdio.h>
#include <string.h>
#include "hj.h"


void test_hj1(void)
{
    char str[5000];
    char *p, *q;
    gets(str);
    p = strtok(str," ");
    while(p != NULL)
    {
    	q = p;
        p = strtok(NULL," ");
    }

    printf("%d\n",strlen(q));

}



void test_hj2(void)
{

}




