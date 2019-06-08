#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "roll_n.h"

int main(void)
{
	int dice, roll;
	int sides;
	int status;

	srand((unsigned int)time(0));
	printf("Enter the number of side per side ,0 to stop\n");
	while (scanf_s("%d",&sides)==1&&sides>0)
	{
		printf("How many dice?\n");
		if ((status = scanf_s("%d", &dice)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				printf("you should have entered an integer.\n");
				printf("again\n");
				printf("Enter the number of side per side ,0 to stop\n");
				continue;
			}
		}
		roll = roll_n_dice(dice,sides);
		printf("you have rolled %d using %d %d-side dice.\n",roll,dice,sides);
		printf("Enter the number of side per side ,0 to stop\n");
	}
	printf("the rollem have called %d times\n",roll_count);

	return 0;
}