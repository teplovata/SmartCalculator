#include "linked_list.h"
#include "stack.h"

int main(void){

    // List digits = {0};
    // int delete = 1111;

    // for (unsigned char i = 0; i < 10; i++) {
    //     add_node(&digits, i); 
    // } 

    // Node *d = search_node(digits, delete);
    // delete_node(&digits, d);

    // print_list(digits);

    // free_list(&digits);

    Stack stack = {0};
    Content content = {0, 0.0, 'x'};

    push_node(&stack, &content);
    
    return 0;
}