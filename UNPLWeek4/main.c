#include <stdio.h>
#include "stringlist.h"

int main(int argc, char* argv[]) {
    s_node *list = init();
    printf("size of snode: %lu\n", sizeof(s_node));
    add(list, "Hello");
    s_node* result = search(list, "Hello");
   //add(list, " ");
   //add(list, "world");
   //print(list);
   //clear(list);
    return 0;
}
