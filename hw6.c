#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, o = 0, e = 0;
	int arr[5];
	int odd[5]; int even[5];
	printf("���� 5�� �Է�");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 1) {
			odd[o] = arr[i];
			o++;
		}
		else {
			even[e] = arr[i];
			e++;
		}
	}
	printf("Ȧ��:");
	for (i = 0; i < o; i++)
		printf("%d ", odd[i]);
	printf("\n");
	printf("¦��:");
	for (i = 0; i < e; i++)
		printf("%d ", even[i]);
	return 0;
}
