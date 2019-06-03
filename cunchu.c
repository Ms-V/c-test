#include <stdio.h>

int in;//这个是内部链接,不管内部还是外部变量，文件作用域的变量，是静态存储期
static int out_out=3;//这个是外部链接，外部链接就是看带不带static,内部带static，外部不带
int main()
{//是什么是块？块就是{}括起来的就是一块

    for (int i = 0; i < 5; i++)//i第一个自动存储期的变量，当for循环结束时自动销毁
        printf("%d\n",i);
    static int fo=1;//当然块的作用域里也能声明静态存储期变量，加static就行,作用域还是在main块里，但是程序一开始就会声明他，所以可以用指针给别的函数
    //printf("|%d|",i);//此举例是这样的，i算是for循环块里的，i作用域只限于for循环，所以在for循环外用i就不行会报错
    printf("%d,%d",out_out,fo);
    
}