#include <stdio.h>

#include "neomath.h"

int main() {
	float a = 12.0f;

	printf("%f * %f = %f\n", a, a, square(a));
	printf("%f * %f * %f = %f\n", a, a, a, cube(a));

	float b = 5.1f;
	printf("%f * %f = %f\n", b, b, square(b));
	
	return 0;
}
