#include <stdio.h>
int p_local(int c,int d,int *e);

int main()
{
    int x;
    int a=2 ,b =3;
    int c=4 ,e=0;
    int f=11;
    int ts[f]={1,2,[6]=7,8,9,10,11,[1]=9};//只初始部分数组元素，没初始的将会自动归零
    printf("a is %d local is %p,b is %d local is %p\n",a,&a,b,&b);//&变量是取变量的地址，*指针是取指针里面的值，所以地址和地址变量要统一类型
    printf("exchange a,b now\n");
    printf("temp is %d\n",x=p_local(a,b,&c));
    printf("now c is %d\n",c);
    for(;e<f;e++)
     printf("The ts[%d] is %d\n",e,ts[e]);
}

int p_local(int c,int d,int *e)
{
    int temp,val;
    temp = c ;
    c = d;
    d =temp;
    *e = 8;
    printf("exchange a is %d local is %p,b is %d local is %p\n",c,&c,d,&d);
    printf("the val is %d\n",val= *e);
    return temp;
}