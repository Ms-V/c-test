#include <stdio.h>
int password = 1993;//密码
int enter;//定义输入密码
int main()
{
    void int_put_pw();
    printf("Please enter the password:");
    int_put_pw();
}

void int_put_pw()//输入密码
{
    int com();
    int pw_time = 0;//设置输入次数变量
    for (; pw_time<=3;pw_time++) //设置输入次数不能超过三回
    {
        if(pw_time<3)
        {
            scanf("%d",&enter);
            com(enter);
            if(com(1))
            {
                break;
            }
            else
            {
                continue;
            }
        }
        else
        {
            printf("Over the enter upper limit!!!The firing shutdown!!");
            break;
        }
    }
}

int com()//对比函数
{
    if(enter==password)
    {
        printf("Password is right The firing program is start.");
        return 1;
    }
    else
    {
        printf("the password is wrong please enter again:");
        return 0;
    }
}