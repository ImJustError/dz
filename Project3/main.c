#include <malloc.h>
#include <stdio.h>
#include "aarray2d.h"

#define stroka 12
#define stolbik 5

int main() {

	array2d array = CreateMass(stroka, stolbik);

	for (int i = 0; i < stroka; i++) {
		for (int j = 0; j < stolbik; j++) {
			setValue(&array, i, j, i * j);
			
		}
		
	}

	for (int i = 0; i < stroka; i++) {
		for (int j = 0; j < stolbik; j++) {
			printf("%02d ", getValue(array, i, j));
		}
		printf("\n");
	}

	destroy(&array);

	return 0;
}