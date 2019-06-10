#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,count =0;
    FILE *fo;
    fo = fopen("1.txt","r");
    while((ch=getc(fo))!=EOF)//EOF是文件结尾的意思，每个文件最后面都有一个EOF作为结尾
    {
        putc(ch,stdout);
        count++;
    }
    printf("\nhave %d char\n", count);
    fclose(fo);
}
