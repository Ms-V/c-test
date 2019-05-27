#include <stdio.h>

int add(const int *start,const int *end );
int main()
{
    int size = 10,in=10,sum;
    int all[size];
    for (; size >= 0;size--)
    {
        if(size==0)
        {
            all[size] = 1;
        }
        else{
            all[size-1] = in;
            in--;
        }
    }
    for (in = 0; in < 10;in++)
    {
        printf("%d\n",all[in]);
    }
    size = 10;
    sum = add(all,all+size);
    printf("sum is %d\n",sum);
}

int add(const int *start, const int *end)//const保证了指针不能修改指针所指向的数组中的数据,但是直接用数组是可以更改值得
{//如果数组被const了，那么指向他的指针也必须是const
    int all=0;
    for (; start < end;start++)
    {
        all += *start;
    }
    return all;
}