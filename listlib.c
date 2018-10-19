#include <stdlib.h>
#include <stdio.h>
#include "listlib.h"
#include <string.h>
#include <time.h>

void list_print(struct song_node *list){
	if(!list){
		printf("NULL\n");	
	}
	else if(list->next){
		printf("name: %s -- artist: %s||",list->name,list->artist);
		//printf("%d\n",list->next); //print next node's address
		list_print(list->next);
	}
	else{	//else is included because the stack value is still on the stack
		printf("name: %s -- artist: %s\n",list->name,list->artist);
	}
}

//expecting user not to mess up the order
struct song_node * list_insert_front(struct song_node *list, char name[100], char artist[100]){
	struct song_node *x;	
	struct song_node new_node;
	strcpy(new_node.name,name);
	strcpy(new_node.artist,artist);
	new_node.next = list;
	x = malloc(sizeof(struct song_node));
	strcpy(x->artist,new_node.artist);
	strcpy(x->name,new_node.name);
	x->next = new_node.next;
	//x = list; 			//will not work
	//printf("%d\n",x->next->next);
	return x;
}

struct song_node * list_free(struct song_node *list){
	if(!list){
	}
	else if(list->next){
		list_free(list->next);
		free(list);
	}
	else{
		free(list);
	}
	return NULL;
}

struct song_node * list_insert_order(struct song_node *list, char* name, char* artist){
	struct song_node *x = list;
	if(!list){
		x = list_insert_front(list,name,artist);	
	}
	else if(strcmp(artist,list->artist) < 0){
		x = list_insert_front(list,name,artist); 
	}
	else if(strcmp(artist,list->artist) == 0){
		if(strcmp(name,list->name)<=0){
			x = list_insert_front(list,name,artist);		
		}
	}	
	else{	
		do{
			if(!list->next){
				insert_helper(list,name,artist);
				break;
			}			
			else if(strcmp(artist,list->next->artist) < 0){
				insert_helper(list,name,artist);
				break;
			}
			else if(strcmp(artist,list->next->artist) == 0){
				if(strcmp(name,list->next->name) <= 0){
					insert_helper(list,name,artist);
					break;
				}
				list = list->next;
			}
			else if(!list->next){
				insert_helper(list,name,artist);
				break;
			}
			else{
				list = list->next;
			}	
		}while(list);
	}
	return x;
}

//it's a helper, it dosen't do anything by itself, so I'm not gonna test it in main
void insert_helper(struct song_node *list,char* name, char* artist){
	struct song_node * new_node;
	new_node = malloc(sizeof(struct song_node));	
	strcpy(new_node->name,name);
	strcpy(new_node->artist,artist);			
	new_node->next = list->next;
	list->next = new_node;
}

struct song_node * list_first_song(struct song_node *list, char* artist){
	while(list){	
		if(strcmp(artist,list->artist)==0){
			break;						
		}
		list = list->next;
	}
	if(!list){
		return NULL;
	}
	return list;
}

struct song_node * list_remove(struct song_node *list, char* name, char* artist){	
	struct song_node *head = list;	
	struct song_node *x = list_search(list,name,artist);
	while(list){
		if(list == x){
			head = x->next;
			free(x);
			x = NULL;
			break;			
		}
		else if(!list->next){
			break;		
		}
		else if(list->next == x){
			list->next = x->next;
			free(x);
			x = NULL;
			break;	
		}
		else{
			list = list->next;
		}
	}
	return head;
}

struct song_node * list_random(struct song_node *list,int seed){
	int i = list_length(list);
	srand(seed);
	i = rand()%i;
	while(i){
		list = list->next;
		i --;
	}
	return list;
}

int list_length(struct song_node *list){
	int i = 0;
	while(list){
		i++;
		list = list->next;
	}
	return i;
}

struct song_node * list_search(struct song_node *list, char* name, char* artist){	
	list = list_first_song(list,artist);	
	while(list){	
		if(strcmp(name,list->name)==0){
			break;					
		}
		list = list->next;
	}
	if(!list){
		return NULL;
	}
	return list;
}

void list_print_node(struct song_node *list){
	if(!list){
		printf("The song/artist does not exist in this list\n");
	}
	else{
		printf("name: %s -- artist: %s\n",list->name,list->artist);
	}
}


