CC=gcc

gpio_lib.o:
	$(CC) -c gpio_lib.c -o $@

clean:
	rm -f *.o

