#include "linked_list.h"

int main(void){

    List digits = {0};
    int delete = 1111;

    for (unsigned char i = 0; i < 10; i++) {
        add_node(&digits, i); 
    } 

    Node *d = search_node(digits, delete);
    delete_node(&digits, d);

    print_list(digits);

    free_list(&digits);

    return 0;
}