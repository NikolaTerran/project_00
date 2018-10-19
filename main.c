#include <stdlib.h>
#include <stdio.h>
#include "musiclib.h"
#include "listlib.h"
#include <string.h>
#include <time.h>

int main(){

printf("******Initializing Testing Environment******\n");
printf("******Initializing Linkedlist***************\n");
struct song_node *head;
//if(NULL == head){
//printf("null\n");
//}
head = list_insert_order(head,"like a rolling stone","bob dylan");
head = list_insert_order(head,"take on me","a-ha");
head = list_insert_order(head,"the final countdown","europe");
head = list_insert_order(head,"in the hall of the mountain king","grieg");
head = list_insert_order(head,"let's fighting love","south park ost");
head = list_insert_order(head,"terran one","starcraft ost");

printf("******Print Demo Linkedlist*****************\n");
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

printf("******Initializing Music Library************\n");
head = table[0];//set head as the beginning of the table in order to add.

printf("====================================\n\n");

printf("MUSIC LIBRARY TESTS\n\n====================================\n\n");

printf("Testing lib_add:\n");
printf("demo msg: added a LOT of songs to my music library\n");
head = lib_add(table,"like a rolling stone","bob dylan");
head = lib_add(table,"take on me","a-ha");
head = lib_add(table,"the final countdown","europe");
head = lib_add(table,"in the hall of the mountain king","grieg");
head = lib_add(table,"let's fighting love","south park ost");
head = lib_add(table,"terran one","starcraft ost");
head = lib_add(table,"viva la vida","coldplay");
head = lib_add(table,"victory","derek duke");
head = lib_add(table,"the final countdown","europe");
head = lib_add(table,"voile, the magic library","zun");
head = lib_add(table,"whistle","flo rida");
head = lib_add(table,"sweet parade","hanazawa gana");
head = lib_add(table,"tales of the electric romeo","immediate music");
head = lib_add(table,"wild wild web","john the whistler");
head = lib_add(table,"watermelon boy","kolaa");
head = lib_add(table,"zombies on your lawn","laura shigihara");
head = lib_add(table,"in the summertime","mungo jerry");
head = lib_add(table,"angel with a shotgun","nightcore");
head = lib_add(table,"counting stars","onerepublic");
head = lib_add(table,"highscore","panda eyes");
head = lib_add(table,"bohemian rhapsody","queen");
head = lib_add(table,"pacific rim","ramin djawadi");
head = lib_add(table,"just blue","space");
head = lib_add(table,"house of the rising sun","the animals");
head = lib_add(table,"don't stop","thefatrat");
head = lib_add(table,"unity","thefatrat");
head = lib_add(table,"monody","thefatrat");
head = lib_add(table,"masked heroes","vexento");
head = lib_add(table,"glorious morning","waterflame");
head = lib_add(table,"game of throne theme","ramin djawadi");
head = lib_add(table,"home","tobe fox");
head = lib_add(table,"spider dance","tobe fox");
head = lib_add(table,"once upon a time","tobe fox");
head = lib_add(table,"megalovania","tobe fox");
head = lib_add(table,"shanghai teahouse ~ chinese tea","zun");
head = lib_add(table,"hopes and dreams","tobe fox");
head = lib_add(table,"undertale","tobe fox");
head = lib_add(table,"u.n. owen was her","zun");
printf("====================================\n\n");

printf("Testing lib_search:\n");
printf("demo msg: search for \"viva la vida\" by coldplay,\n  \"masked heroes\" by vexento,\n  \"unity\" by thefatrat\n  \"bad blood\" by tylor swift(not in the lib)\n  print the result using list_print node\n");
list_print_node(lib_search(table,"viva la vida","coldplay"));
list_print_node(lib_search(table,"masked heroes","vexento"));
list_print_node(lib_search(table,"unity","thefatrat"));
list_print_node(lib_search(table,"bad blood","tylor swift"));

printf("====================================\n\n");

printf("Testing lib_search_artist:\n");
printf("demo msg: search for zun, tobe fox, bob dylan, and tylor swift(not in the lib)\n");
lib_search_artist(table,"zun");
lib_search_artist(table,"tobe fox");
lib_search_artist(table,"bob dylan");
lib_search_artist(table,"tylor swift");

printf("====================================\n\n");

printf("Testing lib_print_letter:\n");
printf("demo msg: print list start with letter \'t\' \'s\' \'b\' \'u\'(NULL)\n");
lib_print_letter(table,'z');
lib_print_letter(table,'t');
lib_print_letter(table,'b');
lib_print_letter(table,'u');

printf("====================================\n\n");

printf("Testing lib_print_artist:\n");
printf("demo msg: print songs created by zun, tobe fox, bob dylan, \n  and tylor swift(not in the lib)\n");
lib_print_artist(table,"zun");
lib_print_artist(table,"tobe fox");
lib_print_artist(table,"bob dylan");
lib_print_artist(table,"tylor swift");
printf("====================================\n\n");

printf("Testing lib_print:\n");
printf("WARNING MSG: this lib is VERY long\n");
lib_print(table);
printf("====================================\n\n");

printf("Testing lib_shuffle: print out a series of randomly chosen songs.\n  You will decide how many to print\n");
lib_shuffle(table,1,time(NULL));
lib_shuffle(table,5,time(NULL)+50);
lib_shuffle(table,10,time(NULL)+100);
lib_shuffle(table,15,time(NULL)+200);
printf("====================================\n\n");

printf("Testing lib_remove: Delete a song\n");
printf("demo msg: print \'a\' \'r\' \'z\' \'u\' before remove any entry\n");
lib_print_letter(table,'a');
lib_print_letter(table,'r');
lib_print_letter(table,'z');
lib_print_letter(table,'u');
lib_remove(table,"take on me","a-ha");
lib_remove(table,"game of throne theme","ramin djawadi");
lib_remove(table,"voile, the magic library","zun");
lib_remove(table,"lul","uuuuuuuu");
printf("demo msg: print \'a\' \'r\' \'z\' \'u\' after removed some entry\n");
lib_print_letter(table,'a');
lib_print_letter(table,'r');
lib_print_letter(table,'z');
lib_print_letter(table,'u');
printf("====================================\n\n");

printf("Testing lib_free: Clear the library\n");
printf("demo msg: use lib_free then use lib_print to show the result\n");
head = lib_free(table);
lib_print(table);
printf("====================================\n\n");
printf("OMG that was tedious, how did I manage to do all of them all by myself?\n");
return 0;

}
