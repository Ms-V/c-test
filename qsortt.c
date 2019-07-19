#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50
void r_s(int [],int);
void s_s(const int [],int);
int mycomp(const void *, const void *);

int main()
{
    srand(time(0));
    int rm[MAX];
    r_s(rm,MAX);
    puts("The random list is:");
    s_s(rm,MAX);
    qsort(rm,MAX,sizeof(int),mycomp);
    puts("\nNow sorted list:");
    s_s(rm,MAX);
    return 0;
}

void r_s(int arr[],int n)
{
    int count;
    for (count = 0; count <n;count++)
        arr[count] = (int)rand() % 100 + 1;
}

void s_s(const int arr[],int n)
{
    int count;
    for (count = 0; count < n;count++)
    {
        printf("%d ",arr[count]);
        if(count%10==9)
            putchar('\n');
    }
    if(count%10!=0)
        putchar('\n');
}

int mycomp(const void * p1,const void *p2)
{
    const int *a1 = (const int *)p1;
    const int *a2 = (const int *)p2;
    if(*a1<*a2)
        return -1;
    else if(*a1==*a2)
        return 0;
    else
        return 1;
}