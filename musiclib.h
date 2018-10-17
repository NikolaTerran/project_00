void lib_print(struct song_node *table);
struct song_node * lib_add(struct song_node *table, char[100] name, char[100] artist);
struct song_node * lib_search(struct song_node *table, char[100] name; char[100] artist);
struct song_node * lib_search_artist(struct song_node *table, char[100] artist);
void lib_print_artist(struct song_node *list, char[100] artist);
void lib_print_letter(struct song_node *table, char letter);
struct song_node * lib_free(struct song_node *table);
void lib_shuffle(struct song_node *table);
struct song_node * lib_remove(struct song_node *list, char[100] name, char[100] artist);

