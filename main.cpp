#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <assert.h>

extern unsigned int rand1(void);
extern void sand1(unsigned int x);

int main()
{
	int count;
	unsigned seed;
	while (scanf_s("%d",&seed)==1)
	{
		sand1(seed);
		for (count = 0; count < 5; count++)
			printf("%d\n",rand1());
		printf("enter number or other exit.\n");
	}
	printf("Exit!!!\n");
	return 0;
}