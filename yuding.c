#include <stdio.h>
#line 99//这句话是重置当前行号为99，当然后面的也会跟着变，所以打印line那个会出103
//#define KONO 11
#if defined(KONO)
    #error Break!//这个是预处理报错退出,运行这个的话 会报自己加的话，然后退出
#endif
int main()
{
    printf("__DATE__ is %s\n",__DATE__);
    printf("__FILE__ is %s\n",__FILE__);
    printf("__LINE__ is %d\n",__LINE__);
    printf("__STDC__ is %d\n",__STDC__);
}