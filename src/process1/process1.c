#include <stdio.h>
#include <math.h>
#include "process1.h"
#include "list.h" 

void print_test(void)
{
     printf("test process1\n");
}

int main(void)
{

    test_slist();
    print_test();
    
    return 0;

}