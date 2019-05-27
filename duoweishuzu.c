#include <stdio.h>

int hang = 4, lie = 4;
void hang_he(int (*ar)[lie], int hang);
void lie_he(int [][lie], int hang);
int sum(int ar[][lie],int hang);

int main()
{
    int a, b, c = 0,e;
    
    int num[hang][lie];
    for (a = 0; a < hang;a++)
    {
        for (b = 0; b < lie;b++)
        {
            num[a][b] = c;
            c++;
        }
    }
    for (a = 0; a < hang;a++)
    {
        for (b = 0; b < lie;b++)
        {
            printf("num[%d][%d] is %d\n",a,b,num[a][b]);
        }
    }
    hang_he(num,hang);
    lie_he(num,hang);
    e=sum(num,hang);
    printf("total is %d\n",e);
    //int (*pz)[2]是声明了，一个指向有两个int类型的数组（就是二维数组呗）
    //int *pz[2]是声明了，一个有两个指针的数组，应为[]优先级高！
    //声明多维数组的指针时时，[]里的数必须跟数组最后一[]一致
}

void hang_he(int (*ar)[lie],int hang)
{
    int a, b, all;
    for (a = 0; a < lie;a++)
    {
        all = 0;
        for (b = 0; b < hang;b++)
        {
            all += ar[a][b];
        }
        printf("hang[%d] sum is %d\n",a,all);
    }
}

void lie_he(int br[][lie], int hang)
{
    int a, b, all;
    for (b = 0; b < hang;b++)
    {
        all = 0;
        for (a = 0; a < lie;a++)
        {
            all += br[a][b];
        }
        printf("lie[%d] sum is %d\n",b,all);
    }
}

int sum(int ar[][lie],int hang)
{
    int a, b, all=0;
    for (a = 0; a < lie;a++)
    {
        for (b = 0; b < hang;b++)
        {
            all += ar[a][b];
        }
    }
    return all;
}