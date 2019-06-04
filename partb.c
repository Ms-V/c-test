#include <stdio.h>

int autoadd(int a, int b);

int autoadd(int a,int b)
{
    extern int count;
    int c;
    c=(a + b)*count;
    return c;
}