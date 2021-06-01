#include <stdio.h>
#include <string.h>
#include "string.h"





void test_str(void)
{
    char *str1 = "http://c.biancheng.net/view/1793.html";
    char *str2;
    int i = 90;
    printf("strlen === %d \n",strlen(str1));
    printf("sizeof === %d \n",sizeof(str2));
    puts(str1);
    putchar('e');
    putchar('\n');
    printf("%c %d %hd %ld \n",i,i,i,i);
    printf("%c %u %hu %lu \n",i,i,i,i);
    printf("%o  %#o\n",i,i);
    printf("%#x  %#X \n",i,i);
    printf("%f   %lf \n",i,i);
    printf("%e   %le \n",i,i);
    printf("%s \n",str1);

    int a1=20, a2=345, a3=700, a4=22;
    int b1=56720, b2=9999, b3=20098, b4=2;
    int c1=233, c2=205, c3=1, c4=6666;
    int d1=34, d2=0, d3=23, d4=23006783;
    printf("%-5d %-5d %-5d %-5d\n", a1, a2, a3, a4);
    printf("%-5d %-5d %-5d %-5d\n", b1, b2, b3, b4);
    printf("%-5d %-5d %-5d %-5d\n", c1, c2, c3, c4);
    printf("%-5d %-5d %-5d %-5d\n", d1, d2, d3, d4);

}