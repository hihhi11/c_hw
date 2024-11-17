#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>
double standard(int * prt, int num)
{
	double mid=0, sum = 0,a=0;
	int i;
	for (i = 0; i < 5; i++) {
		mid += prt[i];
	}
	mid /= 5;
	for (i = 0; i < 5; i++) {
		sum += pow((prt[i] - mid), 2);
	}
	sum /= num;
	a = sqrt(sum);
	return a;

}
int main(void)
{
	int i;
	int arr[5];
	double a = 0;
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Standard Deviation = %.3f", standard(&arr, 5));
	
	return 0;
}