#ifndef LIST_H
#define LIST_H
struct song_node {char name[100]; char artist[100]; struct song_node *next;};
struct song_node * table[27];
#endif

void lib_print(struct song_node *table);
struct song_node * lib_add(struct song_node *table, char* name, char* artist);
struct song_node * lib_search(struct song_node *table, char* name, char* artist);
struct song_node * lib_search_artist(struct song_node *table, char* artist);
void lib_print_artist(struct song_node *list, char* artist);
void lib_print_letter(struct song_node *table, char letter);
struct song_node * lib_free(struct song_node *table);
void lib_shuffle(struct song_node *table);
struct song_node * lib_remove(struct song_node *list, char* name, char* artist);

