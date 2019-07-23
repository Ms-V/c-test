#include <stdio.h>
#include <math.h>
#define NDEBUG//加上这句话，程序就会自动把assrt给禁用了，得加载assert.h得头文件前面
#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
//_Static_assert(CHAR_BIT == 8,"char =16");//这个是检查错误，直接就不让编译

void show(const int ar[],int n);

int main()
{
    double x, y, z;
    //puts("char is 16 bits.");
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int t1[10];
    double c1[5] = {1.23,12.6,186.4,11.1,5.6};
    puts("memcpy v1");
    show(v1,10);
    memcpy(t1, v1, 10 * sizeof(int));//这个和memmove的区别是，memcpy不考虑内存重叠的问题，就是说他不管两个数据有没有在内存中地址重叠,
    //而memmove是会把数据考到一个缓冲区再给目标的,而且memcpy不会考虑数据类型
    puts("memcpy t1");
    show(t1, 10);
    memmove(v1+2,v1,5*sizeof(int));
    puts("memmove");
    show(v1,10);

    puts("enter num1 num2 0 0 to exit");
    while(scanf("%lf %lf",&x,&y)==2&&(x!=0||y!=0))
    {
        z = x * x - y * y;
        assert(z >= 0);//这个呢是一个可以检查程序的函数，当不满足函数条件时，自动断点退出程序，并输出原因，就是函数条件
        printf("num1*num1-num2*num2 is %lf\n",z);
        puts("Next");
    }
    puts("Done");
    return 0;
}

void show(const int ar[],int n)
{
    int i;
    for (i = 0; i < n;i++)
        printf("%d ",ar[i]);
    putchar('\n');
}