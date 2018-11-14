all: strep.o
	gcc -o test strep.o

strep.o: strep.c
	gcc -c strep.c

run: 
	./test

clean:
	rm test
	rm *.o