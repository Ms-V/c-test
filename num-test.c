#include<stdio.h>

int main()
{
    int test_num;
    printf("Plese enter num:");
    //scanf("%d",&test_num);
    if(!scanf("%d",&test_num))
    {
        printf("Enter is not num");
    }
    else
    {
        printf("Enter is a num");
    }
    return 0;
}