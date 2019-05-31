#include <stdio.h>
#include <stdlib.h>

int main(int numb,char * h_in[])//一般编译器只允许，main函数没有参数或者两个参数,两个参数时，第一个是字符串数量计数器
{                               //也可以用char **h_in,说的是h_in是一个指向指针的指针跟这个一样
    int count;
    printf("Have %d word\n",numb-1);//-1是应为命令行开始时，0位是程序名，后面才是正经数字
    for (count = 1; count < numb;count++)//同上所以从1开始
        printf("%d is %s \n", count, h_in[count]);
    char a[2][2]= {"3","45"};
    if(count >atoi(a[1]))
    {
        printf("%d",numb);
        puts("Big one!");
    }
    return count;
}