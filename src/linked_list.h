#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
    int content;
    void *next;
} Node;

typedef struct {
    Node *head;
} List;

Node *add_node(List *src, int cnt);
int delete_node(List *src, Node *target);
void print_list(List src);
void free_list(List *src);
Node *search_node(List src, int cnt);