CC=gcc
CFLAGS=-I. -L.
#DEPS= arraydatastore.h
task: main.o impl.o
main.o: main.c arraydatastore.h 
	$(CC) $(CFLAGS) -c main.c -o main.o -o $@
impl.o: impl.c arraydatastore.h
	$(CC) $(CFLAGS) -c impl.c -o impl.o
#	$(CC)	$(CFLAGS)	-o $@ $^
#main.o: main.c arraydatastore.h
#	$(CC)	$(CFLAGS)	-c main.c
#impl.o: impl.c arraydatastore.h
#	$(CC)	$(CFLAGS)	-c impl.c