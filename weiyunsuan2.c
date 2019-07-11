#include <stdio.h>

int main()
{
    unsigned int n,i;
    puts("number");
    scanf("%d", &n);
    i = ~(00|n)+1;
    printf("%d",i);

    struct{
        int code1 : 1;
        int code2 : 2;
        int : 0;//这个就厉害了，应为会出现越界，编译器发现越界会自动一位移越界字段，保持两边对齐，但是这样会原本越界的字段
        //会留下一个空的地方，为称为洞，所以这个就是为了防止有洞建立的空类型
        int code3 : 3;
    } ta;

    ta.code1 = 1;
    ta.code2 = 1;//这个没规定无符号所以第一位被抢走当符号了，最大还是1，上面的就一位所以最大1系统不管符号
    ta.code3 = 3;

}