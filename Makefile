CC=gcc

gpio_lib.o: gpio_lib.c gpio_lib.h
	$(CC) -c gpio_lib.c -o $@


example: gpio_lib.o gpio.h
	$(CC) example.c gpio_lib.o -o example


clean:
	rm -f *.o

