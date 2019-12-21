#include "../inc/libmx.h"

int mx_list_size(t_list *list){
    if (list == NULL)
        return 0;
    t_list *tmp = list;
    int counter = 1;
    while(tmp->next != NULL){
        tmp = tmp->next;
        counter++;
    }
    return counter;
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
    t_list *node = mx_create_node("1");
    mx_push_back(&node, "2");
    print_list(&node);
    printf("size %d", mx_list_size(node));
    return 0;
}
*/
