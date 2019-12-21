#include "../inc/libmx.h"

bool cmp(char *a, char *b){
    return mx_strcmp(a, b) ? true : false;
}

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)){
    if(!lst && !cmp)
        return NULL;
    void *tmp;
    for(t_list *i = lst; i->next; i = i->next){
        for(t_list *j = i->next; j != NULL; j = j->next){
            if(cmp(i->data, j->data)){
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
        }
    }
    return lst;
}

static void print_list(t_list **list){
    t_list *current = *list;
    while(current != NULL){
        printf("%s ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(){
    t_list *list = mx_create_node("3");
    mx_push_back(&list, "2");
    mx_push_back(&list, "1");
    print_list(&list);
    // bool (*cmp)(void *, void *) = NULL;
    mx_sort_list(list, &cmp);
    print_list(&list);
    return 0;
}
