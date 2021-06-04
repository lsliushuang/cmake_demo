#include <stdio.h>
#include <string.h>
#include <stdlib.h>




char *revstr(char *str, int len)
{
    char c;
    char *start, *end;
    start = str;
    end   = str + len - 1;
    if(str != NULL)
    {
        while(start < end)
        {
            c = *start;
            *start = *end;
            *end = c;

            start++;
            end--;
        }
    }
    return str;

}

int intcmp(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

void test_str(void)
{
    //char str1[] = "fhg;njkn;njnk;tyuy;";
     // char *str2;
     int i = 90;
    // printf("strlen === %d \n",strlen(str1));
    // printf("sizeof === %d \n",sizeof(str2));
    // puts(str1);
    // putchar('e');
    // putchar('\n');
    // printf("%c %d %hd %ld \n",i,i,i,i);
    // printf("%c %u %hu %lu \n",i,i,i,i);
    // printf("%o  %#o\n",i,i);
    // printf("%#x  %#X \n",i,i);
    // printf("%f   %lf \n",i,i);
    // printf("%e   %le \n",i,i);
    // printf("%s \n",str1);

    // int a1=20, a2=345, a3=700, a4=22;
    // int b1=56720, b2=9999, b3=20098, b4=2;
    // int c1=233, c2=205, c3=1, c4=6666;
    // int d1=34, d2=0, d3=23, d4=23006783;
    // printf("%-5d %-5d %-5d %-5d\n", a1, a2, a3, a4);
    // printf("%-5d %-5d %-5d %-5d\n", b1, b2, b3, b4);
    // printf("%-5d %-5d %-5d %-5d\n", c1, c2, c3, c4);
    // printf("%-5d %-5d %-5d %-5d\n", d1, d2, d3, d4);
    // if(b >= 'a' && (b <='z'))
    // {
    //     printf("b is littile\n");
    //     printf("%c \n",b-32);
    // }
    // else
    // {
    //     printf("b is big\n");
    //     printf("%c \n",b-32);
    // }
    

    //revstr(str1,strtok(str1));
	// char str1[] = "sdfjdsfndsjfn;dsnfdsf;njdsf;";
    // const char *delim = ";";
    // char *p = NULL;
    // p = strtok(str1,";");
    // while(p != NULL)
    // {
    //     printf("%s ",p);
    //     p = strtok(NULL,";");
    // }

    int aa[10] = {2,4,6,8,1,4,3,6,7,0};
    qsort(aa,sizeof(aa)/sizeof(aa[0]),sizeof(aa[0]),intcmp);
    
    for(i=0; i<sizeof(aa)/sizeof(aa[0]); i++)
    {
        printf("%d ",aa[i]);
    }
}