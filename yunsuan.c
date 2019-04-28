#include <stdio.h>

int main()
{
    int a, b, c,d,e,f,g,h,i,j,k;
    int x, y, all;
    x = 0;
    y = 1;
    all = 0;
    c = b = a = 18;//三重赋值，从又往左
    d = -c;//给与负数
    e = a / 2;
    f = c + a * b /9;
    g = -(2 + 2) * 8 * (2 + (2 * 2));//括号左边优先，乘除左边优先
    h = (a+1) % 2;//求模,也是求余数
    j = 2;
    i = 2;
    i = i * ++j;//这个等于i*(++j)
    k = 3;
    printf("a is %d,b is %d,c is %d,d is %d,e is %d,f is %d,g is %d\n", a, b, c, d, e, f, g);
    printf("h is %d,i is %d \n",h,i);
    printf("k is %d,k dou is %d \n",k,k*k++);//有时候会先算后面的
    while(x<10)
    {
        x++ ;//x++,先用x再加一，++x先加一再用x，--一样
        all = all + y;
        printf("step is %d , step num is %d ,total is %d\n",x,y,all);
        y = y * 2;
    }
}