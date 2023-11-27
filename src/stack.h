#include <stdlib.h>

typedef struct {
    int i;
    float f;
    char c;
} Content;

typedef struct {
    Content cnt;
    void *next;
    void *prev;
} sNode;

typedef struct {
   sNode *last;
   int count;
} Stack;

sNode *push_node(Stack *src, Content *cnt);
// Content *pop_node(Stack *src);
// Content *peek_node(Stack *src);
// void free_stack(Stack *src);s