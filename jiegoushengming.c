#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define chose_max 10
#define len 100


struct pmain{
    int num;
    char pfmain[chose_max][len];
};//这玩意儿就相当于一个模板

int main()
{
    struct pmain pf={
        1,
        {"you","shao","not","pass"}
    };//应用结构并初始化,多维数组就加个{}
    puts("How many?");
    scanf("%d",&pf.num);
    struct pmain{
        int num;
        char pfmain[chose_max][len];
    } pmaain;//也可以这么声明，就不用再写一遍struct pmain pmaain了
    struct{
        int num;
        char er[22];
    } pmaaain;//也可以这么声明，只不过作用域只限本块,也没法引用
}
