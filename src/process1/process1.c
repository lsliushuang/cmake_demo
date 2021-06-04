#include <stdio.h>
#include <math.h>
#include "process1.h"
#include "list.h" 
#include "c_base.h"
#include "string.h"




unsigned int  jiecheng(unsigned int  x)
{
    if(x == 0 || (x == 1))
        return 1;
    
    x = x * jiecheng(x - 1);
    return x;
}

int main(void)
{

    //test_slist();
    //test_c_base();
    //test_str();
    //test_hj1();
    printf("x = %d \r\n",jiecheng(13));
    return 0;

}