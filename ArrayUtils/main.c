#include <assert.h>
#include <stdio.h>

#include "array_init.h"
#include "array_math.h"

void print_array(int arr[], int size) {
	int i;
	for (i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int a[] = {2, 4, 6};
	print_array(a, 3);
	// Expect: 2 4 6

	printf("Sum of a: %d\n", sum(a, 3));
	assert(sum(a, 3) == 12);
	// Expect: 12

	printf("Mean of a: %f\n", mean(a, 3));
	assert(mean(a, 3) == 4);
	// Expect: 4

	zero_array(a, 3);
	print_array(a, 3);
	// Expect: 0 0 0

	init_array(a, 3, 5);
	print_array(a, 3);
	// Expect: 5 5 5

	return 0;
}
