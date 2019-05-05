#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    int true_v;
    int false_v;
    //_Bool b_test = 1;//_bool不行得_Bool,分大小写,如果不认布尔数换成int你懂得
    a = c = e = 1;
    b = d = 0;
    f = -3;
    /*while(a < 15)//三种不同的方式的while循环，效果是一样的
    {   
        printf("the a is %d\n",a);
        a++;
    }
    while(++b <15)//三种不同的方式的while循环，效果是一样的
    {
        printf("the b is %d\n",b);
    }
    while (e<15)//三种不同的方式的while循环，效果是一样的
    {
        printf("the a is %d\n",e++);
    }*/
    /*while(f)//while(f=!0)跟这个一样
    {
        printf("%d is ture\n",f++);
    }
    printf("%d is false\n",f);//c中一般所有整数都认为为真，只有0为假*/
    true_v = (c > d);
    false_v = (c == d);
    printf("the ture is %d,the false is %d\n", true_v, false_v);
}