
#include <stdio.h>
int main(void)
{
	int x = 0, y = 0, i = 3, n = 0;
	for (; y < 5; y++)
	{
		for (; x <= i; x++)
		{
			printf(" ");

		}
		x = 0;
		for (; x <= n; x++)
		{
			printf("*");
		}
		x = 0;
		--i;

		printf("\n");
		n += 2;
	}
	return 0;
}
