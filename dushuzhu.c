#include <stdio.h>

int sum(int *dr,int sy_l);

int main()
{
    int sh_h,sh_l,num=1;
    int sh[3][3];
    int sy[4]={1,2,3,4};
    /*int sh[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        };*///这也是一种初始化,多维数组的方式
    for(sh_l=0;sh_l<3;sh_l++)
    {
        for(sh_h=0;sh_h<3;sh_h++)
        {
            sh[sh_l][sh_h]=num;
            num++;
        }
    }
    for(sh_l=0;sh_l<3;sh_l++)
    {
        for(sh_h=0;sh_h<3;sh_h++)
        {
            printf("the sh[%d][%d]is :%d\n",sh_l,sh_h,sh[sh_l][sh_h]);
        }
    }
    int *qudizhi;
    qudizhi=sh;
    int quzhi;
    quzhi= *qudizhi;
    printf("qudizhi is %p,quzhi is %d",qudizhi,quzhi);//&是获取地址，*是给出存在地址上得值
    sum(sy,4);
}

int sum(int *dr,int sy_l)
{
    int index;
    int total=0;
    for(index=0;index<sy_l;index++)
    {
        total+=dr[index];
    }
    printf("total is %d",total);
    return 1;
}