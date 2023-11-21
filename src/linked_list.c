#include "linked_list.h"

int main(void){

    List digits = {0};
    Node *d;
    int delete = 5;

    for (unsigned char i = 0; i < 10; i++) {
        Node *n = add_node(&digits, i); 
        if (n->content == delete) {
            d = n;
        }
    } 
    delete_node(&digits, d);

    Node *last_node = digits.head;
    printf("%d\n", last_node->content);
    do {
        last_node = last_node->next;
        printf("%d\n", last_node->content);
    } while (last_node->next); 

    last_node = digits.head;
    do {
        Node *buf = last_node->next;
        free(last_node);
        last_node = buf;
    } while (last_node->next); 


    return 0;
}


Node *add_node(List *src, int cnt) {

    Node *n = malloc(sizeof(Node));
    n->next = NULL;
    n->content = cnt;  

    if (src->head == NULL) {
        src->head = n;
    } else {
        Node *nl = src->head;
        while (nl->next) {
            nl = nl->next;
        } 
        nl->next = n;
    }
    
    return n; 
}

int delete_node(List *src, Node *target) {

    int deleted = 0;

    if (src->head == NULL || target == NULL) {
        return deleted;
    } 
    if (src->head == target) {
        src->head = target->next;
        free(target);
        deleted = 1;
    } else {
        Node *nl = src->head;
        while (nl->next != target && nl->next) {
            nl = nl->next;
        } 
        if (nl->next) {
            nl->next = target->next;
            free(target);
            deleted = 1;
        }
    }

    return deleted;
}