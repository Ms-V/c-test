#include <stdio.h>

int main()
{
    int cha;

    while((cha=getchar())!= EOF)//EOF在大多数系统中是^Z,就是Ctrl+z 读取这个是读取并写入的循环，可以使用重定向在cmd里输出到一个文件
    {
        putchar(cha);
    }
}