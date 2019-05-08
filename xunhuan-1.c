#include <stdio.h>
double ys(double num,int cs);
int cishu,num;

int main(void)
{

    double num_m,deshu;
    int cishu_m;
    printf("This is square\n");
    printf("The num is:");
    scanf("%lf",&num_m);
    printf("The times is:");
    scanf("%d",&cishu_m);
    deshu=ys(num_m,cishu_m);
    printf("The %lf of time %d square is %lf",num_m,cishu_m,deshu);
}   

double ys(double num,int cishu)
{
    int count_f;
    double num_to;
    for (count_f = 1,num_to=1;count_f <=cishu; count_f++)
    {
        num_to *= num;
    }
    return num_to;
}