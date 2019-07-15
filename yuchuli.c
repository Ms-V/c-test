#include <stdio.h>
#include <math.h>//尖括号的意思是查找系统目录来找头文件
//#include "huk.h" 这个是在当前目录里找工作文件
//#include "/usr/biff/p.h" 这个说的是在指定目录里寻找头文件

#define TWO 2
#define PSA printf("x is %d\n", x) //在预设一个宏的时候后面跟不跟;都一样,因为用的时候后面会加上;
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
#define CS(x) printf("The line is "#x" "#x"+"#x" is %d\n",(x)+(x))//这个#x会被视为普通文本
#define XNAME(n) x##n //这个就是自动粘合 ， 意思是 x和n粘合成一个变量，
#define printf_n(n) printf("x is "#n" is %d\n",x##n)//这个就是使用粘合变量
#define PRR(X,...) printf("Message "#X ": "__VA_ARGS__)//变参宏 ...就是可变参数，__VA_ARGS__就是个替换可变位，
//MEssage相当于固定的，还有X，是宏的一部分 ...是后面的参数，x,...,y是不行的

int main()
{

    int x = 14,y=9;
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
    CS(y);
    CS(11);
    int XNAME(1) = 11; //粘合的时候先把粘合的变量这个么初始化,相当于int x1 =11;
    int XNAME(2) = 12;
    int x3 = 13;
    printf_n(1); //这个相当于printf_n(x1);，这个解析就是n是1 所以 x##n就是x1
    printf_n(2);
    printf_n(3);
    double m = 6;
    double k;
    k = sqrt(m);
    PRR(1,"x=%g\n",m);
    PRR(2,"x=%.2f,y=%.4f\n",m,k);

}