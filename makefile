all: main.o listlib.h musiclib.h listlib.o musiclib.o
	gcc main.o listlib.o musiclib.o
  
main.o: listlib.h musiclib.h main.c
	gcc -c main.c

listlib.o: listlib.h listlib.c
	gcc -c listlib.c

musiclib.o: musiclib.h musiclib.c
	gcc -c musiclib.c

run: 
	./a.out

clean: 
	rm *.o
