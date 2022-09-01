#include "array_init.h"

void zero_array(int arr[], int size) {
	int i;
	for (i=0; i<size; i++) {
		arr[i] = 0;
	}
}

void init_array(int arr[], int size, int value) {
	int i;
	for (i=0; i<size; i++) {
		arr[i] = value;
	}
}
