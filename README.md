# Test-homework
## Algebraic math
Create 3 files in a folder called `NeoMath`.

```sh
main.c
neomath.h
neomath_impl.c
```

`neomath.h` and its implementation `neomath_impl.c` should create two functions:

```c
float square(float x);
float cube(float x);
```
and `main.c` should contain the driver code to test these functions.

The executable should be name `test_math`.

## Array utilities
Create 5 files in a folder called `ArrayUtils`.

```sh
main.c
array_init.h
array_init_impl.c
array_math.h
array_math_impl.c
```

`array_init.h` and `array_init_impl.c` should initialize the array to a given value:

```c
void zero_array(int array[], int size);
void init_array(int array[], int size, int value);
```

`array_math.h` and `array_math_impl.c` should do math operations creating the sum of the contents of an array and the mean of the array:

```c
int sum(int array[], int size);
float mean(int array[], int size);
```

`main.c` should contain driver code and test all functions.

The executable should be named `test_array`.