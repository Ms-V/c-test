#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define max 40

struct ep{
    char name[max];
    char local[max];
    int id;
};

struct work{
    char group[max];
    char wk[];//伸缩成员，一个伸缩成员必须在结构的最后，[]里什么都不填
};

int main()
{
    struct ep vp;
    struct work *vpw; //对于伸缩成员最好用指针
    int score,n=5,sc,c;
    char tmp[max];
    puts("enter score:");
    score=getch();
    if(score>5)
    {
        vpw = malloc(sizeof(struct work)+n*sizeof(char));
        puts("enter the group");
        gets(tmp);
        sc = strlen(tmp);
        for (c = 0; c <= sc;c++)
        {
            if(tmp[c]=='\n')
                break;
            vpw->group[c] = tmp[c];
        }
        puts("enter the work");
        gets(tmp);
        sc = strlen(tmp);
        for (c = 0; c <= sc;c++)
        {
            if(tmp[c]=='\n')
                break;
            vpw->wk[c] = tmp[c];
        }
        vp = (struct ep) {"angle","swiss",1};//符合字面结构，就是个临时的结构
        
    }
    else
    {
        vpw = malloc(sizeof(struct work)+n*sizeof(char));
        puts("enter the group");
        gets(tmp);
        sc = strlen(tmp);
        for (c = 0; c <= sc;c++)
        {
            if(tmp[c]=='\n')
                break;
            vpw->group[c] = tmp[c];
        }
        puts("enter the work");
        gets(tmp);
        sc = strlen(tmp);
        for (c = 0; c <= sc;c++)
        {
            if(tmp[c]=='\n')
                break;
            vpw->wk[c] = tmp[c];
        }
        vp=(struct ep) {"amelie","france",2};
    }
    printf("get!\nyou chose %s local %s id %d,group is %s work is %s",vp.name,vp.local,vp.id,vpw->group,vpw->wk);
    free(vpw);
}