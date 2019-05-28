#include <stdio.h>

int main()
{
    puts("have this?");//puts 自动加换行
    puts("or that?");
    puts("\"wow!\"");//要打印"前面加个 '\'
    //const char i[3] = {'a', 'b', '\0', };//不加\0 不是字符串而是个char型数组
    //指定大小时，要确定指定的大小比字符串多1，为了给\0留位置，没使用的元素自动会被给成\0空字符
    //const char * pt ="i have a pen."这么声明也行
    //ati[] ati识别名不能用++ati这样的，应为是个地址常量，但是 *pt这样就可以用pt++，应为他就是个指针！
    //就是初始化数组，把静态区得字符串给数组，而指针是把字符串的地址给指针，以下是区别
    char ar[] = "i won't konw";
    char *pta = "i don't konw";
    int i;
    for (i = 0; i < 6;i++)
        putchar(ar[i]);
    printf("ar1\n");
    putchar('\n');
    for (i = 0; i < 6;i++)
        putchar(pta[i]);
    printf("pta1\n");
    putchar('\n');
    for (i = 0; i < 6;i++)
        putchar(*(ar+i));
    printf("ar2\n");
    putchar('\n');
    for (i = 0; i < 6;i++)
        putchar(*(pta+i));
    printf("pta2\n");
    putchar('\n');
    while(*(pta)!='\0')
        putchar(*(pta++));//ar是数组别名没法用++
    printf("pta3\n");
    putchar('\n');
    pta = ar;//要统一这么做，反过来不行
    while(*(pta)!='\0')
        putchar(*(pta++));
    printf("pta4\n");
    putchar('\n');
    *(ar+7) = 'K';
    ar[8] = 'O';//两种修改方法
    char o[3];
    gets(o);//不推荐用gets，gets无法检测数组长度，会导致缓冲溢出，c11已经抛弃了gets
    printf("o is %s",o);
    fgets(o,3,stdin);//fgets是gets升级版，第一个为要打印的东西，第二个为最大长度(实际为n-1)，第三个为要读入的文件，键盘输入用stdin就行
    //fgets会存上输入时换行符\n
    fputs(o,stdout);//fputs是fgets输出，同样第二个为输出文件，填标准输出就行
}