#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    t_list *tmp = list;
    int counter = 1;

    if (list == NULL)
        return 0;
    for (; tmp->next != NULL; tmp = tmp->next, counter++) {}
    return counter;
}
