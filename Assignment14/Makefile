CC=gcc
CFLAGS=-I. -L.
OBJECTS=main.o impl.o
DEPS= arraydatastore.h
task: $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean: 
	rm $(OBJECTS) task