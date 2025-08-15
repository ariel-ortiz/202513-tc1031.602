# Este es un comentario

CC = g++ -g

main: main.o fact.o
	$(CC) main.o fact.o -o main # Linking...

main.o: main.cpp fact.h
	$(CC) main.cpp -c # Compiling...

fact.o: fact.cpp fact.h
	$(CC) fact.cpp -c # Compiling...
	
.PHONY: clean
clean:
	rm -f main main.o fact.o
