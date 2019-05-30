#include <stdio.h>

int puss(const char *ar);

int main()
{
    char sti[20] = "biu1biu2biu3biu4";
    const char * pti = "ha1ha2ha3ha4ha5";
    char ns[] = {'1','2'};
    puts("6666c666c");
    puts(sti);
    puts(pti);
    puts(&sti[2]);
    puts(pti+2);//puts 里面的值是开始打印位置，遇到空字符停止,puts会自动添加换行符
    puts(ns);//举例！ns没给空字符，所以puts会无线输出知道遇见一个随机空字符
    /*char ge[20];
    while(gets(ge))
        puts(ge);
    printf("fgets\n");
    char ge_2[20];
    while (fgets(ge_2, 20, stdin))
    {
        puts(ge_2);
        printf("fgets\n");
    }*/
    char ge_3[] = "What you want me do????";
    printf("ge_3 is %d,other is %d",puss(ge_3),puss("wow!"));
}

int puss(const char * ar)
{
    int count = 0;
    while(*ar!=0)
    {
        putchar(*ar++);
        count++;
    }
    putchar('\n');
    return count;
}