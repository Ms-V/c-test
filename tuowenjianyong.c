#include <stdio.h>
#include "name_z.h"

int main()
{
    names candidate;
    get_names(&candidate);
    printf("Now You are ");
    show_names(&candidate);
    printf("!!!\n");
    return 0;
}