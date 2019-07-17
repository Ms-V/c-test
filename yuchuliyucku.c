#include <stdio.h>
#define INI 18
//#define MAX 9
//#define KA 11
//#define KB 16

#ifdef MAX
    #include <string.h>
    #define A 19
#else
    #define A 18
#endif//这就是关于条件编译的，意思是 如果预处理器里MAX被定义了，走定义string.h和A=19，如果没有走A=18
//这三个必须都存在才能生效
//ifndef所使用来防止文件头重复这样
#ifndef TEST
    #define TEST 17
#endif

#if A==18//预处理的if else 是就是 else if 是elif
    #define CK 1
#elif A==19
    #define CK 2
#else 
    #define CK 3
#endif

#if defined (MAX)//一种新的检查定义的方式
    #define CKK 98
#elif defined (KA)
    #define CKK 88
#else
    #define CKK 78
#endif


int main()
{
    printf("%d\n",INI);
    #undef INI//这个就是取消define,即使被取消的没有被声明这条也会生效，undef了的标识符是一个未定义的，int q这类对于预处理来说也是未定义的，因为他不是宏
    int INI=99;
    printf("%d\n",INI);
    printf("%d\n",A);
    #ifdef KA
        printf("%d\n",KA);
    #endif//当然！！也可以嵌套用
    #ifndef KB//这个是和idfef一样 但是是取反
        #define PA 15
        printf("%d\n",PA);
    #endif
    printf("%d\n",CK);
    printf("%d\n",CKK);
}