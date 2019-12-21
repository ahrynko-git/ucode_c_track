#include "../inc/libmx.h"

void mx_pop_front(t_list **head){
    if (head == NULL || *head == NULL)
        return;
    t_list *tmp = *head;
    *head = tmp->next;
    // free(*head);
    // *head = tmp;
}
/*
static void print_list(t_list **list){
    t_list *tmp = *list;
    while(tmp != NULL){
        printf("%s ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

int main(){
    t_list *list = mx_create_node("1");
    mx_push_back(&list, "2");
    mx_push_back(&list, "3");
    print_list(&list);
    mx_pop_front(&list);
    print_list(&list);
}
*/
