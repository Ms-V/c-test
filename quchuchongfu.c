#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int first = 22;
    int a, b;
    int num[7];
    for (a = 0; a < 7; a++)
    {
        num[a] = rand() % first + 1;
        for (b = a;b>0;b--)
        {
            if(a==0)
            {
                break;
            }
            else
            {
               if(num[a]==num[a-b])
               {
                   num[a] = 0;
                   a--;
                   break;
               }
               else
               {
                   continue;
               }
            }
        }
    }
    for (a = 0; a < 7;a++)
    {
        printf("%d\n",num[a]);
    }
}