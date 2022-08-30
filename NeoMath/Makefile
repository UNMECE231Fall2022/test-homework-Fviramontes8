#target: prerequisties
#	action

all: test_m

test_m: main.o neomath_impl.o
	gcc main.o neomath_impl.o -o test_m

main.o: main.c neomath.h
	gcc -c main.c

neomath_impl.o: neomath_impl.c neomath.h
	gcc -c neomath_impl.c

clean:
	-rm *.o test_m
