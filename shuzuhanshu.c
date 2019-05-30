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
    int sc_a;
    scanf("%s %s", c1, c2);
    while((sc_a=strcmp(c1,c2))!=0)//strcmp,可以比较两个数组是否一样，一样返回0，如果c1比c2大回-1，反之返回1,长数组小，段数组大
    {
        puts("wrong again");
        printf("sc is %d\n",sc_a);
        scanf("%s %s",c1,c2);
    }
}

int xut_shu1(char *cutt, unsigned int size)
{
    if (strlen(cutt) > size)//strlen检查数组长度
        cutt[size] = '\0';
    return size;
}

