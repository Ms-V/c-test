#include <stdio.h>

void re();
void ioo();

int wb[10];
int io = 8;

int in;//这个是内部链接,不管内部还是外部变量，文件作用域的变量，是静态存储期
static int out_out=3;//这个是外部链接，外部链接就是看带不带static,内部带static，外部不带
int main()
{//是什么是块？块就是{}括起来的就是一块

    for (int i = 0; i < 5; i++)//i第一个自动存储期的变量，当for循环结束时自动销毁
        printf("%d\n",i);//一个没有花括号的块，就是for的一个子块
    static int fo=1;//当然块的作用域里也能声明静态存储期变量，加static就行,作用域还是在main块里，但是程序一开始就会声明他，所以可以用指针给别的函数
    //printf("|%d|",i);//此举例是这样的，i算是for循环块里的，i作用域只限于for循环，所以在for循环外用i就不行会报错
    printf("%d,%d",out_out,fo);
    auto int a=1;//auto 为声明一个自动变量，自动存储期，无连接块作用域，自动变量不会自动初始化
    printf("%d\n",a);
    int x = 30;
    printf("out is %d\n",x);
    {
        int x = 77 - 3;
        printf("in x is %d\n",x);
    }
    printf("out is %d\n",x);
    while(x++<34)
    {
        int x = 12;
        x++;
        printf("while x is %d\n",x);//这个会一直显示13应为在while里的x，x++后块结束了，while循环的x又被重新创建了
    }
    printf("out is %d\n",x);
    register int cd = 7;//声明了一个cpu寄存器变量，这个玩意儿没得地址，因为在cpu中,就是用的快,也是个自动变量,行不行看cpu，cpu可以拒绝请求，拒绝了就变成普通变量
    //但是还是不能用地址，有些类型无法声明成寄存器变量
    printf("cd %d\n",cd);
    for (int count = 0; count < 3;count++)
        re();
    extern int wb[10];//在内部声明一个外部变量，这个是可选的，如果外部变量和局部重名 可以用auto给局部来区别，但是如果有外部和局部重名局部优先，该函数看不见同名外部变量
    for (; io < 10;++io)
        printf("io in main %d\n",io);
    ioo();
}

void re()
{
    static int a = 0;//a会增加，应为a是个静态变量了，b不会 因为re一结束b就重置地址和值，并且static的变量只会初始化一次
    int b = 0;//a不会应为，啊是个静态的只要这个函数被调用a自动回来了而且，地址和值都是和上次一样的
    a++;//static变量跟全局变量一样，但是不同的是static的变量只有所在的函数才能看的见，函数形参中不能使用static
    b++;
    printf("a is %d b is %d\n",a,b);
}
void ioo()
{
    io=io*2;
    printf("io in ioo io++ x2 is %d\n",io);
}