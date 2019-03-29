#include <stdio.h>
#include <stdbool.h>
int password = 1993; //吸入
int enter, pw_time;  //定义输入密码，声明全局变量pw_time用于密码输入计数
_Bool validate;//声明布尔值validate，用于验证密码输入结果
int main(void)
{
    void int_put_pw();
    printf("Please enter the password: ");
    int_put_pw();
    system("pause");
}

void int_put_pw() //输入密码
{
    void com();
    for (pw_time = 0; pw_time <= 3; ++pw_time) //设置输入次数不能超过三回
    {
        if (pw_time < 3)
        {
            scanf("%d", &enter);
            com(enter);
            if (validate == true)
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
            printf("Over the enter upper limit!!!The firing shutdown!!\n");
            break;
        }
    }
}

void com() //对比函数
{
    if (enter == password)
    {
        printf("Password is right The firing program is start.\n");
        validate = true;
    }
    else
    {
        if (pw_time < 2)
        {
            printf("the password is wrong please enter again: ");
        }
        validate = false;
    }
}