#include <stdio.h>

int main()
{
    int a, b, c, d, e, f,g,h,j,k,l;
    int true_v;
    int false_v;
    //_Bool b_test = 1;//_bool不行得_Bool,分大小写,如果不认布尔数换成int你懂得
    a = c = e = 1;
    b = d = j=0;
    f = -3;
    g = 9;
    while(a < 15)//三种不同的方式的while循环，效果是一样的
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
    }
    while(f)//while(f=!0)跟这个一样
    {
        printf("%d is ture\n",f++);
    }
    printf("%d is false\n",f);//c中一般所有整数都认为为真，只有0为假
    for (h = 1,k=0; h <= g; h++,k -= g) //为初始化，二条件，三为执行更新,都号可以分割可以一起初始化或更新同时规定了顺序，都号左边先运算
    {
        j += g;
        printf("j+=g is %d,k-=g is %d,h is %d,total is %d\n",j,k,h,g);
    }
    do{//出口循环，你懂得
        printf("2+2 is ?");
        scanf("%d",&l);
    } while (l!=2+2);
    printf("right\n");
    true_v = (c > d);
    false_v = (c == d);
    printf("the ture is %d,the false is %d\n", true_v, false_v);
}