#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 30



struct name{
    char *name;
    char *local;
    int id;
};
void gtin(struct name * inn);
int c_id = 1;

int main()
{
    struct name ep;
    gtin(&ep);
    printf("name is %s,local is %s,id is %d",ep.name,ep.local,ep.id);
    free(ep.name);
    free(ep.local);
}

void gtin(struct name * inn)
{
    char tmp[max];
    puts("enter name:");
    scanf("%s",tmp);
    inn->name = (char *)malloc(strlen(tmp) + 1);
    strcpy(inn->name,tmp);
    puts("enter local:");
    scanf("%s",tmp);
    inn->local = (char *)malloc(strlen(tmp) + 1);
    strcpy(inn->local,tmp);
    inn->id = c_id;
    c_id++;
}