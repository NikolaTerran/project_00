#include <stdlib.h>
#include <stdio.h>
#include "listlib.h"
#include <string.h>

void list_print(struct song_node *list){
	if(!list){
		printf("This list is empty\n\n");	
	}
	else if(list->next){
		printf("%s\n",list->name);
		printf("%s\n",list->artist);
		//printf("%d\n",list->next); //print next node's address
		print_list(list->next);
	}
	else{	//else is included because the stack value is still on the stack
		printf("%s\n",list->name);
		printf("%s\n",list->artist);
	}
}

struct song_node * list_insert_front(struct song_node *list, char* name, char* artist){
	struct song_node *x;	
	struct song_node new_node = {name;artist;list};
	x = malloc(sizeof(song_node));
	x->artist = new_node.artist;
	x->name = new_node.name;
	x->next = new_node.next;
	//x = list; 			//will not work
	//printf("%d\n",x->next->next);
	return x;
}

struct song_node * list_free(struct song_node *list){
	if(list->next){
		free_list(list->next);
		free(list);
	}
	else{
		free(list);
	}
	return NULL;
}

struct song_node * list_insert_order(struct song_node *list, char* name, char* artist){
	struct song_node *x = list;	
	while(list){
		if(strcmp(artist,list->artist) <= 0){
			if(strcmp(name,list->name) <= 0){
				break;
			}
			list = list->next;
		}
		else{
			list = list->next;
		}	
	}
	struct song_node new_node = {name;artist;list};

	//////////////Edit from Here
	x = malloc(sizeof(song_node));
	x->artist = new_node.artist;
	x->name = new_node.name;
	x->next = new_node.next;
	return x;
}

struct song_node * list_first_song(struct song_node *list, char* artist){
  return 0;
}

struct song_node * list_remove(struct song_node *list, char* name, char* artist){
  return 0;
}

struct song_node * list_random(struct song_node *list){
  return 0;
}

struct song_node * list_search(struct song_node *list, char* song, char* artist){
  return 0;
}
