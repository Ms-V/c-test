#include <stdio.h>
#include <string.h>//数组文件头

int main()
{
    int ch_w;//定义字节位数
    char name[10];//定义char数组，虽然定了10位但是输入时能超过10位
    printf("plase enter word:");
    scanf("%s",name);//遇见输入空格会停止读取！！！
    for (ch_w=0;ch_w<=10;ch_w++)//打印数组对应的字节
    {
        printf("The name[%d] is %c \n",ch_w,name[ch_w]);
    }
    printf("Tne char name have %llu long,use the strlen\n",strlen(name));//读实际长度
    printf("Tne char name have %llu long,use the sizeof",sizeof name);//读定义时候的长度
    return 0;
}