#include <stdio.h>
#include "c_base.h"


typedef int* (*pf)(int*,int*,int); //函数指针

int (*fun1)(int); //函数指针
int *fun2(int); //指针函数

int *find_value(int *begin, int *end, int value)
{
    while(begin != end && (*begin != value))
    {
        ++begin;
    }
    return begin;
}


void test_c_base(void)
{   
    pf find = find_value;
    int aa[10] = {1,2,3,4,5,6,7,8,9,0};
    char *str[3] = {"hello","yunda","lius"};
    printf("result = %d \n",*find(aa,&aa[9],2));
}