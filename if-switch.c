#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char test_cr;
    while((test_cr=getchar()) != '\n')
    {
        if(isalpha(test_cr))
        {
            putchar(test_cr+2);
        }
        else if(isdigit(test_cr))//else if 河 if else 其实是嵌套
        {
            putchar(test_cr+3);    
        }
        else
        {
            putchar(test_cr);
        }
    }
    putchar(test_cr);

}