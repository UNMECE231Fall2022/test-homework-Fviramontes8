#include <assert.h>

#include "array_math.h"

int sum(int arr[], int size) {
	int acc = 0;
	int i;
	for (i=0; i<size; i++) {
		acc += arr[i];
	}
	return acc;
}

float mean(int arr[], int size) {
	assert(size != 0);
	int arr_sum = sum(arr, size);
	return arr_sum / (float) size;
}

