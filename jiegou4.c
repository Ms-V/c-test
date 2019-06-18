#include <stdio.h>
#include <stdlib.h>
#define maxl 50

double to;
struct em{
    int month;
    double mo_in;
    double mo_out;
};
double to_mo(const struct em * sum);

int main()
{
    int count;
    struct em n2019[12];
    printf("enter start total:\n");
    scanf("%lf", &to);
    for (count = 0; count <= 11;count++)
    {
        printf("Enter the month %d in:",count+1);
        scanf("%lf", &n2019[count].mo_in);
        printf("Enter the month %d out:",count+1);
        scanf("%lf",&n2019[count].mo_out);
        printf("the month %d is %lf", count+1, to +=to_mo(&n2019[count]));//用指针来传递
        puts("");
    }
    printf("all year total is %lf\n",to);
}

double to_mo(const struct em * sum)
{

    return (sum->mo_in-sum->mo_out);//指针和
}