#include <stdio.h>
#include "stringlist.h"

int main(int argc, char* argv[]) {
	s_node* list = init();
	printf("size of snode: %lu\n", sizeof(s_node));
	add(list, "Hello");
	add(list, "Asd");
	s_node* result = search(list, "Asd");
	printf("Found: %s\n", result->content);
	delete(list, "Hello");
	delete(list, "Asd");

	add(list, " ");
	delete(list, " ");
	//add(list, "world");
	//print(list);
	//clear(list);
	return 0;
}
