#include <stdio.h>
#include <stdlib.h>
#define maxl 50

double to;
int to_mo(double in, double out);

struct em{
    int month;
    double mo_in;
    double mo_out;
};

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
        printf("the month %d is %lf", count+1, to += to_mo(n2019[count].mo_in, n2019[count].mo_out));
        puts("");
    }
    printf("all year total is %lf\n",to);
}

int to_mo(double in ,double out )
{

    return (in -out);
}