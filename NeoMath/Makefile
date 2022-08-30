#target: prerequisties
#	action

all: test_math

test_math: main.o neomath_impl.o
	gcc main.o neomath_impl.o -o test_math

main.o: main.c neomath.h
	gcc -c main.c

neomath_impl.o: neomath_impl.c neomath.h
	gcc -c neomath_impl.c

clean:
	-rm *.o test_math
