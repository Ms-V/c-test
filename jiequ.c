#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc,char * argv[])
{
    FILE *in, *out;//声明两个文件指针
    int ch,count =0;
    char name[LEN];
    if(argc<2)
    {
        fprintf(stderr,"Enter error not have enough name %s\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((in=fopen(argv[1],"r"))==NULL)
    {
        fprintf(stderr,"%s file is empty\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    strncpy(name,argv[1],LEN-5);
    name[LEN - 5]='\0';
    strcat(name,".txt");
    if((out=fopen(name,"w"))==NULL)
    {
        fprintf(stderr,"can't create out file\n");
        exit(EXIT_FAILURE);
    }
    while((ch=getc(in))!=EOF)
    {
        if(count++%3==0)
            putc(ch,out);
    }
    if(fclose(in)!=0||fclose(out)!=0)
        puts("close error\n");
    return 0;
}