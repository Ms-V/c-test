#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxe 10

struct ep{
    char name[60];
    char sex[10];
    int id;
};

int main()
{
    struct ep overwatch[maxe];
    int count=0,filecount,index;
    FILE *overw;
    int size = sizeof(struct ep);
    if((overw=fopen("name.txt","a+b"))==NULL)
    {
        puts("open txt error!");
        exit(1);
    }
    rewind(overw);
    while(count<maxe&&fread(&overwatch[count],size,1,overw)==1)
    {
        if(count==0)
            puts("Enter dat");
        printf("name %s sex %s id %d\n",overwatch[count].name,overwatch[count].sex,overwatch[count].id);
        count++;
    }
    filecount = count;
    if(count==maxe)
    {
        puts("file full");
        exit(2);
    }
    puts("now enter new staff name,in start enter [enter] exit");
    while(count <maxe&&gets(overwatch[count].name)!=NULL&&overwatch[count].name[0]!='\0')
    {
        puts("enter sex");
        gets(overwatch[count].sex);
        puts("enter id");
        scanf("%d",&overwatch[count].id);
        while(getchar()!='\n')
            continue;
        if(count<maxe)
            count++;
            puts("enter next staff name");
    }
    if(count>0)
    {
        puts("you enter is!");
        for (index = 0; index < count;index++)
            printf("id %d name %s sex %s\n",overwatch[index].id,overwatch[index].name,overwatch[index].sex);
        fwrite(&overwatch[filecount], size, count - filecount, overw);
    }
    else
        puts("no staff");
    fclose(overw);
}