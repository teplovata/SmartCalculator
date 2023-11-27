#include "stack.h"

sNode *push_node(Stack *src, Content *cnt) {

    sNode *n = malloc(sizeof(sNode));
    n->cnt = *cnt;
    n->next = src->last;
    n->prev = NULL;

    src->last = n;

    src->count++;

    return n;
}

// Content *pop_node(Stack *src) {

// }

// Content *peek_node(Stack *src) {

// }

// void free_stack(Stack *src) {

// }