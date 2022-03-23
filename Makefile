P=main
OBJECTS = main.o myFIFO.o
CFLAGS = -g -Wall
LDLIBS=
CC=gcc

all: $(P)

# Generate application
$(P): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(P) $(OBJECTS) $(LDLIBS)
	
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(P)

