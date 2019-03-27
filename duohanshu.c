#include <stdio.h>

void pf(void);
int main()
{
    int a=14, b[a];
    for (; a >= 0;a--)
    {
        b[a] = a;
        printf("a= %d \t , b[%d]= %d \t",a,a,b[a]);
        pf();
    }
    getchar();
    return 1;
}

void pf(void)
{
        printf("it's work good for this \n");
}