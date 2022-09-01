all: test_array

test_array: main.o array_init_impl.o array_math_impl.o
	gcc main.o array_init_impl.o array_math_impl.o -o test_array

main.o: main.c array_init.h array_math.h
	gcc -c main.c

array_init_impl.o: array_init_impl.c array_init.h
	gcc -c array_init_impl.c

array_math_impl.o: array_math_impl.c array_math.h
	gcc -c array_math_impl.c

clean:
	-rm *.o test_array
