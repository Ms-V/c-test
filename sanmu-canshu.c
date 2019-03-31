#include <stdio.h>

int main(void)
{
    int max_test(int x,int y);
    int a, b,c;
    printf("Please enter two num");
    scanf("%d,%d",&a,&b);
    c=max_test(a,b);
    printf("max is %d,a is %d,b is %d",c,a,b);
}

int max_test(int x,int y)
{
    int z;
    z = x> y ? x : y;
    x = x + 1;
    y = y + 1;
    printf("x+1 is %d\n",x);
    printf("y+1 is %d\n",y);
    return z;
}