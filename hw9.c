#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}
int main(void)
{
	char ch[100];
	int i;
	char wo;
	printf("Input> : ");
	fgets(ch, sizeof(ch), stdin);
	ch[strlen(ch) - 1] = 0;
	int a = strlen(ch);
	printf("Output> : ");
	for (i = 0; i < a; i++) {
		wo = convCase(ch[i]);
		fputc(wo, stdout);
	}
	return 0;
}