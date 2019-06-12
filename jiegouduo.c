#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXL 100

struct sms{
    char name[MAXL];
    char sex[7];
    int moneyn;
    int moneyt;
};

int main()
{
    struct sms mune[MAXL];
    int co = 0;
    int index;

    printf("Please enter the staff detailed info enter the empty to stop\n");
    while(co<MAXL &&gets(mune[co].name)!=NULL &&mune[co].name[0]!='\0')
    {
        if(co>MAXL)
            printf("over the limit\n");
        else
            printf("please enter next staff name\n");
        printf("enter sex\n");
        gets(mune[co].sex);
        printf("enter night money\n");
        scanf("%d",&mune[co].moneyn);
        printf("enter one times money\n");
        scanf("%d",&mune[co].moneyt);
        co++;
    }
    if(co>0)
    {
        printf("This is all you staff\n");
        for (index = 0; index < co;index++)
            printf("The No.%d staff name is %s sex is %s one night is %d one time is %d\n",index,mune[index].name,mune[index].sex,mune[index].moneyn,mune[index].moneyt);
    }
}