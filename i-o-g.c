#include <stdio.h>

int main()
{
    int num=0;
    char get_c;
    while((get_c=getchar())!='y')
    {
        if(get_c=='n')
            printf("is %d right?\n",++num);
        else
            printf("Enter error\n");
        while(getchar()!='\n')
            continue;
    }
}