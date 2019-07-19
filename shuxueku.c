#include <stdio.h>
#include <stdlib.h>

void sign_off(void);
void too_bar(void);

int main()
{
    int n;
    atexit(sign_off);//这个是注册下到时候退出显示的东西

    puts("enter a int");
    if(scanf("%d",&n)!=1)
    {
        puts("number is not int");
        atexit(too_bar);//同样的如果不是整数，覆盖下显示信息
        exit(EXIT_FAILURE);
    }
    printf("%d is %s\n",n,(n%2==0)?"even":"odd");
    return 0;//main结束时会自带隐藏的exit，所以在main结束时肯定会打印，同时当定义了多个，在退出时会跟定义顺序反序输出
}//atexit最好是void类不带任何参数的函数

void sign_off(void)
{
    puts("Is work man!");
}

void too_bar(void)
{
    puts("Is not a int!exit now!");
}