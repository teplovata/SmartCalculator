#include "linked_list.h"

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

void print_list(List src) {

    Node *last_node = src.head;
    printf("%d\n", last_node->content);
    do {
        last_node = last_node->next;
        printf("%d\n", last_node->content);
    } while (last_node->next); 

}

void free_list(List *src) {

    Node *last_node = src->head;
    do {
        Node *buf = last_node->next;
        free(last_node);
        last_node = buf;
    } while (last_node->next); 

}

Node *search_node(List src, int cnt) {

    if (src.head == NULL) {
        return NULL;
    }
    
    Node *n = NULL;
    Node *last_node = src.head;
    do {
        if (last_node->content == cnt) {
            n = last_node;
            break;
        }
        last_node = last_node->next;
    } while (last_node->next);  

    return n;
}