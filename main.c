#include <stdlib.h>
#include <stdio.h>
#include "musiclib.h"
#include "listlib.h"
#include <string.h>
#include <time.h>

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

printf("Testing list_insert_front: insert nodes at the front, \n  then returns a pointer to the beggining of the list\n");
printf("WARNING MSG: the user MUST knows what to add to the front of the list\n  in order to not mess up the order of the list\ndemo msg: adding \"alone\" by alan walker\n");

head = list_insert_front(head,"alone","alan walker");

printf("====================================\n\n");

printf("Testing list_insert_order: insert nodes in order\n  alphabetical by Artist then by Song\n  then returns a pointer to the beginning of the list\n");
printf("demo msg: adding \"positively 4th street\" by bob dylan\n  ||different song by existing artist\n");
head = list_insert_order(head,"positively 4th street","bob dylan");
printf("demo msg: adding \"positively 4th street\" by bob dylan\n  ||same song by existing artist\n");
head = list_insert_order(head,"positively 4th street","bob dylan");
printf("demo msg: adding \"life\" by tobu\n  ||adding song to the end of the list\n");
head = list_insert_order(head,"life","tobu");

printf("====================================\n\n");

printf("Testing list_print: print the entire list, then returns nothing\n");
printf("demo msg: print the linkedlist to illustrate the effect \n  of the previous insertions\n");
list_print(head);

printf("====================================\n\n");

printf("Testing list_search: find a pointer to a node based on\n  artist and song name then returns it\n");
printf("demo msg: use the function list_print_node\n  (which is not included in the project assignment)\n  to print out the result of a successful search\n  and a failed search, respectively\n");
list_print_node(list_search(head,"positively 4th street","bob dylan"));
list_print_node(list_search(head,"desolation row","bob dylan"));

printf("====================================\n\n");

printf("Testing list_first_song: find a pointer to the first song of an artist based on artist name\n  then returns it\n");
printf("demo msg: use the function list_print_node\n  to print out the search result of a existing artist\n  and a non-existing artist, respectively\n");
list_print_node(list_first_song(head,"bob dylan"));
list_print_node(list_first_song(head,"tylor swift"));
printf("====================================\n\n");

printf("Testing list_random: return a pointer to random element in the list\n");
printf("demo msg: use the function list_print_node\n  to print out the result of list_random\n");
list_print_node(list_random(head,time(NULL)));
list_print_node(list_random(head,time(NULL) + 1));
list_print_node(list_random(head,time(NULL) + 2));
list_print_node(list_random(head,time(NULL) + 3));
printf("====================================\n\n");

printf("Testing list_remove: remove a single specified node from the list\n  then returns the pointer to the begginning of the list\n");
printf("demo msg: use the function list_print_node\n  to print out the result of list_remove\n");

printf("demo msg: delete \"positively 4th street\" by bob dylan\n");
head = list_remove(head,"positively 4th street","bob dylan");

printf("demo msg: delete \"alone\" by alan walker\n");
head = list_remove(head,"alone","alan walker");

printf("demo msg: delete \"life\" by tobu\n");
head = list_remove(head,"life","tobu");

printf("demo msg: delete \"life\" by tobu\n");
head = list_remove(head,"life","tobu");

printf("demo msg: use list_print to print the list after this modification\n");
list_print(head);
printf("====================================\n\n");

printf("Testing list_free: free the entire list\n");
head = list_free(head);
list_print(head);
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
