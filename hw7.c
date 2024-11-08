#include <stdio.h>
int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int i;
	int* fi = &arr1; int* la = &arr2; int fl;
	printf("arr1 : ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2 : ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	for (i = 0; i < 6; i++) {
		fl = *fi;
		*fi = *la;
		*la = fl;
		fi++;
		la++;
	}
	printf(" \nafter swap \n");
	printf("arr1 : ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2 : ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	return 0;
}