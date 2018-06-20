CC=gcc

gpio_lib.o: gpio_lib.c gpio_lib.h
	$(CC) -c gpio_lib.c -o $@

clean:
	rm -f *.o

