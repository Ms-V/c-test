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
    printf("lin %d yi %d er %d san %d si %d shi %d shiyi %d \n",lin,yi,er,san,si,shi,shiyi);//枚举是这么用的 想不到吧 我是没想到
}