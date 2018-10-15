all: main.o listlib.h arraylib.h 
  gcc main.o list_print.o list_insert_front.o list_insert_order.o list_search.o list_first_song.o list_random.o list_remove.o list_free.o array_add.o array_search.o array_search_artist.o array_print_letter.o array_print_artist.o array_print.o array_shuffle.o array_remove.o array_free.o
  
main.o: listlib.h arraylib.h main.c
  gcc -c main.c

list_print.o: listlib.h list_print.c
  gcc -c list_print.c
  
list_insert_front.o: list_insert_front.c listlib.h
  gcc -c list_insert_front.c

list_insert_order.o: list_insert_order.o listlib.h
  gcc -c list_insert_order.c

list_search.o: list_search.c listlib.h
  gcc -c list_search.c
  
list_first_song.o: list_first_song.c listlib.h
  gcc -c list_first_song.c

list_random.o: list_random.c listlib.h
  gcc -c list_random.c

list_remove.o: list_remove.c listlib.h
  gcc -c list_remove.c
  
list_free.o: list_free.c listlib.h
  gcc -c list_free.c
  
array_add.o: array_add.c listlib.h arraylib.h
  gcc -c array_add.c
  
array_search.o: array_search.c listlib.h arraylib.h
  gcc -c array_search.c

array_search_artist.o: array_search_artist.c listlib.h arraylib.h
  gcc -c array_search_artist.c
  
array_print_letter.o: array_print_letter.c listlib.h arraylib.h
  gcc -c array_print_letter.c
  
array_print_artist.o: array_print_artist.c listlib.h arraylib.h
  gcc -c array_print_artist.c
  
array_print.o: array_print.c listlib.h arraylib.h
  gcc -c array_print.c

array_shuffle.o: array_shuffle.c listlib.h arraylib.h
  gcc -c array_shuffle.c

array_remove.o: array_remove.c listlib.h arraylib.h
  gcc -c array_remove.c

array_free.o: array_free.c listlib.h arraylib.h
  gcc -c array_free.c

run: ./a.out

clean: rm *.o
