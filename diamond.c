#include <stdio.h>

void main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}
		printf("*");
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf(" ");
		}
		if (i != 0)
		{
			printf("*");
		}
		printf("\n");
	}


	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		printf("*");
		for (j = 0; j < 5 - 2 * i; j++)
		{
			printf(" ");
		}
		if (i != 3)
		{
			printf("*");
		}
		printf("\n");
	}
}
