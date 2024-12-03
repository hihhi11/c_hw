#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
typedef struct city {
	char name[20];
	char country[20];
	char population[20];
}City;


int main(void) {
	City city[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("Name> "); scanf("%s", city[i].name);
		printf("Country> "); scanf("%s", city[i].country);
		printf("Population> "); scanf("%s", city[i].population);
	}
	printf("Ptinting the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %s people \n"
			, i + 1, city[i].name, city[i].country, city[i].population);
	}
	return 0;
}