CC=gcc
CFLAGS=-std=gnu99

all: univ fake_sort

univ: FORCE
	rm -rf *~ univ
	$(CC) -o univ univ.c univ_main.obj $(CFLAGS)

fake_sort: FORCE
	rm -rf *~ fake_sort
	$(CC) -o fake_sort fake_sort.c $(CFLAGS)

clean:
	rm -rf *~ univ fake_sort

FORCE: