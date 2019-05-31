#include <stdio.h>
#include <string.h>
#define size_shu 30

int xut_shu1(char *,unsigned int);

int main()
{
    char t_a[20] = "yo!let's do it!";
    char t_b[30] = "12345678901234567890";
    puts(t_a);
    puts(t_b);
    xut_shu1(t_a, 10);
    xut_shu1(t_b, 7);
    puts(t_a);
    puts(t_b);
    puts(t_a+11);
    strcat(t_a,t_b);//把第二个数组和第一个数组链接，第二个数组不变，第一个数组为两个的和,无法检测第一个数组是否够大
    puts(t_a);
    puts(t_b);
    strncat(t_a,t_b,2);//这个可以检测第一个数组是否够大
    puts(t_a);
    printf("c1 c2\n");
    char c1[size_shu];
    char c2[size_shu];
    int sc_a,sn_c;
    scanf("%s %s", c1, c2);
    while((sc_a=strcmp(c1,c2))!=0)//strcmp,可以比较两个数组是否一样，一样返回0，如果c1比c2大回-1，反之返回1,长数组小，段数组大
    {
        puts("wrong again");
        printf("sc is %d\n",sc_a);
        scanf("%s %s",c1,c2);
    }
    char c3[4][20] = {"rick", "rick it of", "just do fuck", "do not fuck"};
    for (sn_c = 0; sn_c < 4;sn_c++)
    {
        if(strncmp(c3[sn_c],"rick",3)==0)//strncmp可以比对数组，第三个参数可以指定比到第几个
        {
            printf("%s\n",c3[sn_c]);
        }
    }
    printf("%s\n%s\n",t_a,t_b);
    puts("change");
    char temp[30];
    strcpy(temp,t_a);//strcpy,可以交换数组，返回的是第一个参数的值，两个参数数组不用从第一位元素开始,不会检查数组长度是否合适
    strcpy(t_a,t_b);
    strncpy(t_b,temp,30);//strncpy可以指定拷贝的最大字符数
    printf("%s\n%s\n",t_a,t_b);
    char allin[200];
    sprintf(allin,"a is \"%s\" b is \"%s\"",t_a,t_b);//sprintf可以把数组，字符串结合成一个新的数组,就是个格式化
    puts(allin);
}

int xut_shu1(char *cutt, unsigned int size)
{
    if (strlen(cutt) > size)//strlen检查数组长度
        cutt[size] = '\0';
    return size;
}

