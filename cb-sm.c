#include <stdio.h>

int main()
{
    int num1,num2,stat,ats;
    do
    {
        printf("test two num which is biger.\nThe first num is:");
        scanf("%d",&num1);
        printf("The second num is:");
        scanf("%d",&num2);
        stat=num1>num2?1:0;
        if(stat==1)
        {
            printf("first num is biger\n");
            for(ats=0;num2!=num1;ats++)
            {
                if(num2<0)
                {
                    printf("second is <0 can't add\n");
                    break;//continue是不执行他线面的语句，break 直接跳出当前循环
                }
                else
                {
                    num2++;
                }
            }
            printf("num first num = second num aad %d times\n",ats);
        }
        else
        {
            printf("second num is biger\n");
        }
        printf("enter not num to exit\n");
    }while(scanf("%d",&stat)!=0);    
}