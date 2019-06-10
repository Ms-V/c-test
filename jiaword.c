#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 55

int main(void)
{
    FILE *av;
    char word[MAX];

    if((av=fopen("input.txt","a+"))==NULL)
    {
        fprintf(stderr, "open file error\n");
        exit(EXIT_FAILURE);
    }
    puts("enter words add file,# to end");
    while((fscanf(stdin,"%50s",word))==1&&(word[0])!='#')
        fprintf(av,"%s\n",word);
    puts("File is");
    rewind(av);
    while(fscanf(av,"%s",word)==1)
        puts(word);
    puts("done");
    if(fclose(av)!=0)
        puts("close file error");
    return 0;
}