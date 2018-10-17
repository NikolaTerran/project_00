#ifndef LIST_H
#define LIST_H
struct song_node {char name[100]; char artist[100]; struct song_node *next;};
struct song_node * table[27];
#endif

void list_print(struct song_node *list);
struct song_node * list_insert_front(struct song_node *list, char* name, char* artist);
struct song_node * list_free(struct song_node *list);
struct song_node * list_insert_order(struct song_node *list, char* name, char* artist);
struct song_node * list_first_song(struct song_node *list, char* artist);
struct song_node * list_remove(struct song_node *list, char* name, char* artist);
struct song_node * list_random(struct song_node *list);
struct song_node * list_search(struct song_node *list, char* song, char* artist);
//#endif
