#include <stdio.h>

struct no{
    char name[20];
    char sex[20];
    struct {
        int id;
        char cup[20];//这是一个匿名结构嵌套
    };
};

int main()
{
    struct no a[2]= {{"angle","female",{1,"36d"}},{"amelie","female",{2,"36c"}}};//这是一个结构数组，就是结构组成的数组懂？？？
    printf("%d %s %s %s\n%d %s %s %s",a[0].id,a[0].name,a[0].sex,a[0].cup,a[1].id,a[1].name,a[1].sex,a[1].cup);
}