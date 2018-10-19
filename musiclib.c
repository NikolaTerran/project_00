#include <stdlib.h>
#include <stdio.h>
#include "musiclib.h"
#include "listlib.h"
#include <string.h>
#include <time.h>

struct song_node * lib_add(struct song_node **table, char* name, char* artist){
	int order = (artist[0]-19)%26;
	//table[order] = malloc(100);
	table[order] = list_insert_order(table[order],name,artist);
	return table[0];
}

struct song_node * lib_search(struct song_node **table, char* name, char* artist){
	struct song_node *x = table[(artist[0]-19)%26];
	while(x){
		if(strcmp(x->artist,artist) == 0 && strcmp(x->name,name) == 0){
			//list_print_node(x);			
			break;
		}
		x = x->next;
	}
	return x;
}

struct song_node * lib_search_artist(struct song_node **table, char* artist){

	struct song_node *x = table[(artist[0]-19)%26];
	while(x){
		if(strcmp(x->artist,artist)==0){
		printf("artist found: %s\n",artist);
		break;	
		}
		x = x->next;
	}
  	return x;
}

void lib_print_letter(struct song_node **table, char letter){
	if(table[(letter-19)%26]){printf("%c list:\n", letter);	
	list_print(table[(letter-19)%26]);
	}		
}

void lib_print_artist(struct song_node **table, char* artist){
	struct song_node *x = lib_search_artist(table,artist);
	while(x){
		list_print_node(x);
		x = x->next;
		if(!x){break;}
		else if(strcmp(x->artist,artist)!=0){
			break;
		}
	}
}

void lib_print(struct song_node **table){
	int i = 97;
	int counter;
	for(counter = 0;counter < 26; counter++){
		char c = i;
		lib_print_letter(table,i);
		i++;
	}
	//else{
	//printf("NULL");
}

//number = size of the output, seed is seed
void lib_shuffle(struct song_node **table, int number, int seed){
	int i;
	for(i = number; i > 0; i--){
		srand(seed + i);
		int ran_num = rand()%26;
		while(!table[ran_num]){  	//not to return a NULL list
			ran_num++;
		}
		list_print_node(list_random(table[ran_num],rand()+i));
	}
	printf("end shuffle\n");
}

struct song_node * lib_remove(struct song_node **table, char* name, char* artist){
	table[(artist[0]-19)%26] = list_remove(table[(artist[0]-19)%26],name,artist);
	return table[0];
}

struct song_node * lib_free(struct song_node **table){
	int counter;
	for(counter = 0;counter < 26; counter++){		
		table[counter] = list_free(table[counter]);
	}
	return table[0];
}


