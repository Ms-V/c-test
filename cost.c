#include <stdio.h>
#include <limits.h>

//#define INT_MAX +13

int main(void)
{
    const int month = 12;
    printf("please enter month");
    scanf("%d",&month);
    printf("month is %d \n",month);//测试如果定义了不能更改的数值是否能更改
    printf("please enter the max test");
    printf("The max test is %d",INT_MAX);//测试limits.h里对int_max定义
    return 1;
}