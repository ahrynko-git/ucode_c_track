#include "list.h"

int mx_list_size(t_list *list) 
{
    int i = 0;
    
    t_list *temp = list;

    while (temp != NULL) 
    {
        temp = temp->next;
        i++;
    }

    return i;
}
