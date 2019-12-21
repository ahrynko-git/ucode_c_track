#include "../inc/libmx.h"

t_list *mx_create_node(void *data){
    t_list *node = malloc(sizeof(t_list));
    node->data = data;
    node->next = NULL;
    return node;
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
    print_list(&list);
    return 0;
}
*/
