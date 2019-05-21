#include <stdio.h>

void print_a(char ch,int num);
int min(int num1,int num2);
void up_and_down(int num,int level);

int main()
{
    char ch;
    int num,num1,num2,imin,level;
    printf("enter what and how many\n");
    scanf("%c %d",&ch,&num);
    print_a(ch,num);
    printf("\n");
    printf("check level please enter num and how many level\n");
    scanf("%d",&level);
    int level_num=1;
    up_and_down(level_num,level);
    printf("enter tow num\n");
    while(scanf("%d %d",&num1,&num2)==2)//这个返回值可以叠加，厉害了哟！！！！
    {
        imin=min(num1,num2);
        printf("the lower num is %d\n",imin);
        printf("enter q exit or two num continue\n");
    }
}

void print_a(char ch,int num)
{
    int count;
    for(count=1;count<=num;count++)
    {
        putchar(ch);
    }
}

int min(int num1,int num2)
{
    return  num1<num2?num1:num2;//返回值和函数类型不一样也行，但是会被整形成函数的类型,return;只能在void函数里用
}

void up_and_down(int num,int level)//递归是这样，举例在这个函数中运行时，运行到if条件为真时，进入下一层递归
{                                  //不运行调用自己递归下面的代码，下层递归同理，然后当递归到if条件为假时第一个递归，自己结束，同时开始结束上一层递归
    printf("Level %d:n location is %p\n",num,&num);//每一层的参数、变量是每一层的，懂？？？？？？？
    if(num<level)
        up_and_down(num+1,level);
    printf("LEVEL %d:n location is %p\n",num,&num);//
}
