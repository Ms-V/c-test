#include <stdio.h>

#define TWO 2
#define PSA printf("x is %d\n", x) //在预设一个宏的时候后面跟不跟;都一样
#define DU "now is about\
 sex"//这个\延续的后面不能跟东西要不就失效了，注意这行前面有空格，应为从换了行到下一行结束都算！！！
//define就是个宏，命名规则遵循C变量命名规则
#define DO TWO*TWO//预处理的时候不会运算,不会对表达式进行求值，这里就是个TWO*TWO
#define LJ "now x is %d\n"
#define ZA "Z"//双引号里面是字符串，所以这个ZA表示Z\0
#define ZAA 'z'//单引号是字符，所以这个是z
#define QE(x,y) x*y//介个就是一个带函数的宏！括号里是函数 懂了吧
#define PX(x) "x is %d\n",x
#define PQ(x) PX(QE(x,x))//宏！嵌套懂了吧！！！
#define QG(x) x*x//演示一个奇怪的第一部分
#define QGG(x) (x)*(x)//修复奇怪的问题
int main()
{

    int x = 14;
    PSA;
    puts(DU);
    x = DO;
    PSA;
    printf(LJ,x=60+9);
    x = 6;
    x = QE(x, x);
    PSA;
    printf(PX(2));//带函数的宏 简单的引用
    printf(PQ(5));
    printf(PX(QG(5+2)));//奇怪的第二部分：这个按照逻辑应该是7的平方，但是出来是17，应为宏建立时并不运算，所以到了PX里时时5+2*5+2没括号懂吧
    printf(PX(QGG(5+2)));//在预处理加括号 就对了
}