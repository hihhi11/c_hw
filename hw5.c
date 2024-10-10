#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int bina(int a, int num, int i)
{
	int b;
	b = (num - i >= 0) ? (1) : (0);
	printf("%d", b);
	(b == 1) ? (num -= i) : (num = num);
	i /= 2;
	a--;
	if (a == 0)
		return 0;
	bina(a, num, i);
	return 0;
}
int main(void)
{
	int num;
	printf(" Please enter a number: ");
	scanf("%d", &num);
	int i, a = 1;
	for (i = 2; i <= num; i *= 2)
		a++;
	i /= 2;
	bina(a, num, i);
	return 0;
}