#include <stdio.h>
#include "tfox.h"
#line 99//这句话是重置当前行号为99，当然后面的也会跟着变，所以打印line那个会出103
//#define KONO 11
#if defined(KONO)
    #error Break!//这个是预处理报错退出,运行这个的话 会报自己加的话，然后退出
#endif

#define allin(X) _Generic((X),int:"int11",float:"float11",double:"double11",default:"Other")//这个叫泛类选择，其中_Generic是必须带的，
//不能错，default也是必须在的，这个意思就是，如果是泛类选择里有，变量为导入变量相应的输出

inline static void dcf()//这个叫内联函数，作用就是当把一个内联函数调放在别的函数调用时，跟在那个函数里写的一样，就是的函数宏！
{
    //但是据说这玩意儿 有时候灵，有时不行
    printf("This is l\n");
}//这个东西说是无法获取地址，能获取的话就不是内联函数了,同样不要写太长的内联函数，应为长了调用时间会变长，就跟写在一块一样了
//同样，这个内联函数可以放在头文件中

int main()
{
    printf("__DATE__ is %s\n",__DATE__);
    printf("__FILE__ is %s\n",__FILE__);
    printf("__LINE__ is %d\n",__LINE__);
    printf("__STDC__ is %d\n",__STDC__);
    int a=1;
    double b = 2.2;
    float c= 3.333;
    char d = 'd';
    dcf();
    lly();
    printf("a is %s\n",allin(a));
    printf("a is %s\n",allin(b));
    printf("a is %s\n",allin(c));
    printf("a is %s\n",allin(d));
}