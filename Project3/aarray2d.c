#include "aarray2d.h"
#include <stdlib.h>



array2d CreateMass(int str, int col) {

	array2d mass1;
	mass1.array = malloc(str * sizeof(int*));
	int* mass2 = malloc(str * col * sizeof(int));

	int* tmp = mass2;
	for (int i = 0; i < str; i++) {
		mass1.array[i] = mass2;
		mass2 += col;
	}
	return mass1;
}


int setValue(array2d* array, int str, int col, int value) {
	if (array->array == NULL || str < 0 || col < 0) {
		printf("error");
		return NULL;
	}
	
	(array->array)[str][col] = value;
	return 0;
}


int getValue(array2d array, int str, int col) {
	if (array.array == NULL || str < 0 || col < 0) {
		printf("error");
		return NULL;
	}

	return array.array[str][col];
}

int destroy(array2d* array) {
	if (array->array == NULL) {
		printf("error");
		return NULL;
	}

	free(*(array->array));
	free(array->array);
	return 0;
}


