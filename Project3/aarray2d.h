#pragma once



typedef struct { int** array; }array2d;

array2d CreateMass(int str, int col);
int setValue(array2d* array, int str, int col, int value);
int getValue(array2d array, int str, int col);
int destroy(array2d* array);