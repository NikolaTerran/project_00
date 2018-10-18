#include <stdlib.h>
#include <stdio.h>
#include "musiclib.h"
#include "listlib.h"
#include <string.h>

int main(){

printf("******Initializing Testing Environment******\n");
printf("******Initializing Music Library************\n");
struct song_node *head;
head = list_insert_front(head,"like a rolling stone","bob dylan");
head = list_insert_order(head,"take on me","a-ha");
head = list_insert_order(head,"the final countdown","europe");
head = list_insert_order(head,"in the hall of the mountain king","grieg");
head = list_insert_order(head,"let's fighting love","south park ost");
head = list_insert_order(head,"terran one","starcraft ost");

printf("******Print Demo Music Library**************\n");
list_print(head);

printf("\n====================================\n\nLINKED LIST TESTS\n\n====================================\n\n");

printf("Testing list_insert_front:\n");
printf("WARNING MSG: the user MUST knows what to add to the front of the list\n  in order to not mess up the order of the list\ndemo msg: adding \"fade\" by alan walker\n");

head = list_insert_front(head,"alone","alan walker");

printf("====================================\n\n");

printf("Testing list_insert_order:\n");
printf("demo msg: adding \"positively 4th street\" by bob dylan\n  ||different song by existing artist\n");
head = list_insert_order(head,"positively 4th street","bob dylan");
printf("demo msg: adding \"positively 4th street\" by bob dylan\n  ||same song by existing artist\n");
head = list_insert_order(head,"positively 4th street","bob dylan");
printf("demo msg: adding \"life\" by tobu\n  ||adding song to the end of the list\n");
head = list_insert_order(head,"life","tobu");

printf("====================================\n\n");

printf("Testing list_print:\n");
printf("demo msg: print the linkedlist to illustrate the effect \n  of the last two insertions\n");
list_print(head);

printf("====================================\n\n");

printf("Testing list_search:\n");
printf("demo msg: use the function list_print_node\n  (which is not included in the project assignment)\n  to print out the result of a successful search\n  and a failed search, respectively\n");
list_print_node(list_search(head,"positively 4th street","bob dylan"));
list_print_node(list_search(head,"desolation row","bob dylan"));

printf("====================================\n\n");

printf("Testing list_first_song:\n");
printf("demo msg: use the function list_print_node\n  to print out the search result of a existing artist\n  and a non-existing artist, respectively\n");
list_print_node(list_first_song(head,"bob dylan"));
list_print_node(list_first_song(head,"tylor swift"));
printf("====================================\n\n");

printf("Testing list_random:\n");
printf("demo msg: use the function list_print_node\n  to print out the result of list_random\n");
list_print_node(list_random(head));
printf("====================================\n\n");

printf("Testing list_remove:\n");

printf("====================================\n\n");

printf("Testing list_free:\n");

printf("====================================\n\n");

printf("MUSIC LIBRARY TESTS\n\n====================================\n\n");

printf("Testing lib_add:\n");

printf("====================================\n\n");

printf("Testing lib_search:\n");

printf("====================================\n\n");

printf("Testing lib_search_artist:\n");

printf("====================================\n\n");

printf("Testing lib_print_letter:\n");

printf("====================================\n\n");

printf("Testing lib_print_artist:\n");

printf("====================================\n\n");

printf("Testing lib_print:\n");

printf("====================================\n\n");

printf("Testing lib_shuffle:\n");

printf("====================================\n\n");

printf("Testing lib_remove:\n");

printf("====================================\n\n");

printf("Testing lib_free:\n");

printf("====================================\n\n");
  
return 0;

}
