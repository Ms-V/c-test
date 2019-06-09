#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    //分为 二进制、文本内容， 二进制、文本格式， 二进制、文本模式
    // i/o两个级别：底层i/o使用操作系统的基本i/o服务，标准高级i/o使用c标准包和stdio.h
    //标准输入是键盘啥的 标准输出和标准错误输出是显示器，标准错误输出会把一些错误不管输出到哪都会在显示器上显示
    int ch;
    FILE *fp;//这个file指针并没有指向文件 而是指向了一个包含文件信息的数据
    unsigned long count = 0;
    if(argc!=2)
    {
        printf("Usage:%s filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(argv[1],"r"))==NULL)//fopen为打开文件函数，后面的r是打开模式r为只读,w慎用，w会把文件清空
    {
        printf("Can't open %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF)//用getc获取字符
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu char\n",argv[1],count);
}