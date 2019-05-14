#include <stdio.h>
#include <ctype.h>

int main()
{
    char quits;
    printf("What you wang to konw about this?\na any\nh how\nw who\nchose:");
    while((quits=getchar())!='q')
    {   
        if('\n'==quits)
            continue;
        if(islower(quits))
        {
            switch(quits)
            {
                case 'a':
                    printf("just a test\n");
                    break;//不加这个，如果选了这个下面的全执行
                case 'h':
                    printf("use c\n");
                    break;
                case 'w':
                    printf("This is Anuriel\n");
                    break;
                default:
                    printf("enter error\n");
                
            }
        }
        else
        {
            printf("just lower world\n");
        }
    }
}