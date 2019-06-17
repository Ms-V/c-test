#include <stdio.h>
#include <stdlib.h>
#define LEN 20

struct fcia{
    int id;
    char cname[50];
    int top;
};
struct apps{
    int id;
    char aname[50];
    int top;
    struct fcia app;//嵌套的话，再另一个声明中得声明被嵌套的名字，就是给个名字
};


int main()
{
    struct apps wi[2];
    puts("What app is you like?");
    gets(wi[0].aname);
    wi[0].id = 1, wi[0].top = 1, wi[0].app.id = 1, wi[0].app.top = 1;
    puts("What channel is you like?");
    gets(wi[0].app.cname);
    printf("You %d app is %s top %d,the %d app %d channel is %s top %d\n",wi[0].id,wi[0].aname,wi[0].top,wi[0].id,wi[0].app.id,wi[0].app.cname,wi[0].app.top);
    wi[1].id = 2, wi[1].top = 2, wi[1].app.id = 2, wi[1].app.top = 2;
    puts("What app is you like next?");
    gets(wi[1].aname);
    puts("What channel is you like next?");
    gets(wi[1].app.cname);
    printf("next You %d app is %s top %d,the %d app %d channel is %s top %d\n",wi[1].id,wi[1].aname,wi[1].top,wi[1].id,wi[1].app.id,wi[1].app.cname,wi[1].app.top);
    struct apps *apache;//声明结构指针就是用结构名加 * 指针名就行了
    printf("1 is %p,2 is %p\n",&wi[1],&wi[2]);
    apache = &wi[0];//和数组不同 结构名并不是结构地址 所以要加上&
    printf("pointer 1 %p pointer 1+1=2 %p",apache,apache+1);
    printf("apache->.aname is %s,apace.aname is %s,(apache+1)->app.cname is %s", apache->aname, (*apache).aname, (apache+1)->app.cname);
    //用指针调用结构时 用->指向元素,想要指向下一个元素就用 (指针+1)->元素就行了
}