#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 50

struct ep{
    char name[TSIZE];
    int id;
    struct ep *next;
};

char *s_gets(char *,int);

int main()
{
    struct ep * head = NULL;
    struct ep * prev , *current;
    char input[TSIZE];
    int id_index = 1;
    puts("Enter the ep name:");
    while(s_gets(input,TSIZE)!=NULL&&input[0]!='\0')
    {
        current = (struct ep *)malloc(sizeof(struct ep));
        if(head==NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->name,input);
        current->id = id_index;
        id_index++;
        puts("Enter next or empty to exit");
        prev = current;
    }
    if(head==NULL)
        puts("No data");
    else
        puts("The ep list is this");
    current = head;
    while(current!=NULL)
    {
        printf("Id is %d,name is %s\n", current->id, current->name);
        current = current->next;
    }
    current = head;
    while(current!=NULL)
    {
        current = head;
        head = current->next;
        free(current);
    }
    puts("END");
    return 0;
}

char *s_gets(char * tr,int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(tr, n, stdin);
    if(ret_val)
    {
        find = strchr(tr,'\n');
        if(find)
            *find ='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return ret_val;
}