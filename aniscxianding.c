#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    const int *pf;//这个是指针指向地址值不能改变
    int const *pfa;//同上
    int *const pff=&a;//这个是指着指向的地址不能改变
    const int *const pdf=&c;//这个是地址不能变，值也不能变
    //就是const在*左边，指定地址的值不能改变，在右边指针地址不能改变
    //pff=&b,就不行了，被int *const pff=&a;定了
    //同样*pf=3;被 const int *pf定了也不行了
    pf = &a;
    a = 3;//但是该不通过指针能改值
    const int f = 3;//给了变量没什么讲究
    //文件间共享变量的话，定义了const 在别的文件extern 也加const
    //要是放在文件头中，那就无所谓了
    volatile const int e = 0;//这个volatile告诉编译器不要优化代码
}