#include "../inc/libmx.h"

void mx_push_front(t_list **list, void *data){
    t_list *tmp = mx_create_node(data);
    tmp->next = *list;
    *list = tmp;
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
    mx_push_front(&node, "2");
    print_list(&node);
    return 0;
}
*/
