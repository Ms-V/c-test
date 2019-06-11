#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ac;
    char gc;
    int fc;
    if((ac=fopen("input.txt","r"))==NULL)
    {
        fprintf(stderr,"open error\n");
        exit(EXIT_FAILURE);
    }
    printf("%p\n",ac);//看下ac是个啥
    fseek(ac,-10L,SEEK_END);
    fc = ftell(ac);
    while((gc=getc(ac))!=EOF)
    {
        putc(gc,stdout);
    }
    if(fclose(ac)!=0)
    {
        printf("close error");
    }
    puts("\n");
    printf("%d",fc);
}