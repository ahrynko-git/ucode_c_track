#include "../inc/libmx.h"

void mx_pop_back(t_list **head){
    if(head == NULL || *head == NULL)
        return;
    t_list *current = *head;
    if (current->next != NULL){
        while(current->next->next != NULL)
            current = current->next;
        current->next = NULL;
    } else
        *head = NULL;
    // free(current->next);
    // current->next = NULL;
}
/*
static void print_list(t_list **list){
    t_list *current = *list;
    while(current != NULL){
        printf("%s ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(){
    t_list *list = mx_create_node("1");
    mx_push_back(&list, "2");
    mx_push_back(&list, "3");
    mx_push_back(&list, "4");
    print_list(&list);
    mx_pop_back(&list);
    print_list(&list);
    return 0;
}
*/
