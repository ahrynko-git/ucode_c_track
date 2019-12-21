#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data){
    t_list *new = mx_create_node(data);
    if(*list == NULL)
        *list = new;
    else {
        t_list *last = *list;
        while(last->next != NULL)
            last = last->next;
        last->next = new;
    }
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
    mx_push_back(&node, "3");
    print_list(&node);
    return 0;
}
*/
