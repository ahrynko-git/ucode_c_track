#include "list.h"

void mx_pop_index(t_list **list, int index) {
    int i = 0;
    t_list *cur = *list;
    while (cur->next != NULL && i != index-1) {
        cur = cur->next;
        i++;
    }   
    cur->next = cur->next->next;
}
