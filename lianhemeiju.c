#include <stdio.h>

union overwatch{//联合类型，联合一次只能存储一个值,不过地址够不够一次就一个值，下次指定别的值时，会把上次的值给删了
    int a;
    double b;
    char c;
};

enum sap{lin,yi,er,san,si,shi=10,shiyi
};//枚举，枚举从默认0开始,这个枚举出来是lin是0yi是1...si是4，但是！！！shi应为程序给了10，所以是10，shiyi是11，就是中间给断了，从断了的继续数
//枚举只能在内部使用
struct yu{
    int ffa;
    union {
        int m;
        char h;
    };//匿名union，用法
};
typedef unsigned char zi;//声明一个无符号字符类型的zi类型！！这是个自定义类型！通常一般用大写来声明，方便识别
//typedef 遵循变量命名规则
typedef struct com{
    int a;
    char b;
}COM;//typedef也可以这么玩，就是用的时候把stuct com xx变成了COM xx
int main()
{
    union overwatch *zhang;
    printf("%p\n",&zhang);
    union overwatch liu = {.b=23.4};//建立时初始化一个数据得这么初始化
    printf("b=%f\n", liu.b);
    liu.a = 13;//另一个初始化方法,他把liu得里面23.4给删除了
    printf("a=%d\n", liu.a);
    liu.c = 'a';//同上,并且把13.23.4都删了
    printf("a is %d b is %f c is %c\n",liu.a,liu.b,liu.c);
    enum sap wow;
    wow = lin;
    printf("lin %d yi %d er %d san %d si %d shi %d shiyi %d \n",lin,yi,er,san,si,shi,shiyi);//枚举是这么用的 想不到吧 我是没想到
    zi ho[10] = "you !!!!";//自定义完了后就这么用！就是哥类型了！
    printf("%s\n",ho);
    COM ww={1,2};
    printf("ww is %d %d",ww.a,ww.b);
    for (wow = lin; wow <= shiyi;wow++)//如果枚举被定义了某个元素，这么用for循环wow，是不会看枚举里的数的及时枚举里没有，也会给你按序输出出来的
        printf("wow is %d\n",wow);
}