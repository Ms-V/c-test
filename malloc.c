#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pdf, i = 0, max, number;
    puts("how many");
    if(scanf("%d",&max)!=1)
    {
        puts("number not right\n");
        exit(EXIT_FAILURE);
    }
    pdf = (int *)calloc(max,sizeof(int));//用malloc(max * sizeof(int))也行，malloc和calloc区别是calloc会自动归零位
    if(pdf==NULL)//变长数组和这个malloc和calloc区别是，变长是自动存储，作用域只限于块，快没了就没了，malloc和calloc一直在内存中只要不释放
    {
        printf("memory access failed\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter number now");
    while(i<max&&scanf("%d",&pdf[i])==1)
        ++i;
    printf("you entre %d number\n",number=i);
    for (i = 0; i < number; i++)
    {
        printf("%d\n",pdf[i]);
    }
    free(pdf);
    int n = 5, m = 6,nu=0, (*pff)[m],n1,m1;
    pff = (int(*)[m])malloc(n*m*sizeof(int));
    for (n1 = 0; n1 < n;n1++)
    {
        for (m1 = 0; m1 < m;m1++)
        {
            pff[n1][m1] = nu++;
        }
    }

    for (n1 = 0; n1 < n;n1++)
    {
        for (m1 = 0; m1 < m;m1++)
        {
            printf("pff[%d][%d] is %d\n",n1,m1,pff[n1][m1]);
        }
    }
    for (n1 = 0; n1 < n;n1++)
    {
        for (m1 = 0; m1 < m;m1++)
        {
            printf("pff[%d][%d] addr is %p\n",n1,m1,&pff[n1][m1]);
        }
    }//总结动态分配内存malloc、calloc可以在一个函数创建，在另一个函数或者外联函数销毁，free销毁，这样慢
}//自动存储的话快，但是当所在作用域没了，就没了，静态数据，自动数据，动态数据分别在内存不同的地方！！