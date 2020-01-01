#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
    t_list *current = *head;
    
    if (head == NULL || *head == NULL)
        return;
    if (current->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    while (current->next->next != NULL)
        current = current->next;
    free(current->next);
    current->next = NULL;
}
