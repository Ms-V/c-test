#include <stdio.h>

int autoadd(int a,int b);
int count = 0;
int main()
{
    int a = 0,b=0;
    puts("enter a b");
    scanf("%d %d",&a,&b);
    puts("add hou many time?");
    scanf("%d",&count);
    autoadd(a,b);
}