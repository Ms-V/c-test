#include <stdio.h>
int displayt(char d_ch,int d_hang,int d_lie);

int main()
{
    int ch;
    int hang,lie;
    printf("zi hang lie \n");
    while((ch=getchar())!='\n')//scanf和getchar,区别之一是，getchar不会跳过换行符（\n）
    {
        scanf("%d %d",&hang,&lie);
        displayt(ch,hang,lie);
        while(getchar()!='\n')
            continue;
        printf("zi hang lie enter quit\n");
    }
}

int displayt(char d_ch,int d_hang,int d_lie)
{
    int row,col;
    for(row=1;row<=d_hang;row++)
    {
        for(col=1;col<=d_lie;col++)
            putchar(d_ch);
        printf("\n");
    }
    return 1;
}