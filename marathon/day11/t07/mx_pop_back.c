#include "list.h"

void mx_pop_back(t_list **list) 
{
	t_list tmp = *list;
 	
 	while(tmp->next->next != NULL)
 		tmp = tmp->next;

 	free(tmp->next);
 	tmp->next = NULL;

 }
