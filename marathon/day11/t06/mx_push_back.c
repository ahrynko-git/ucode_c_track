#include "list.h"

void mx_push_back(t_list **list, void *data)
{
	t_list *back_list  = mx_create_node(data);

	t_list *tmp = *list;

	while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = back_list;
}
