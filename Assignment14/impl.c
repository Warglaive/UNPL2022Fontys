#include "arraydatastore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define row 4
// used to store a dynamically allocated array of pointers to char

char** strings;
int col;
void init(int n) {
	if (n <= 0)
	{
		printf("col has to be > 0!");
		return;
	}
	col = n;
	strings = malloc(row * sizeof(char*));

	for (int rowCounter = 0; rowCounter < row; rowCounter++)
	{
		strings[rowCounter] = (char*)malloc(n * sizeof(char*));
	}
	printf("Matrix initialized (Memory Allocated)\n");

}
/* pre : true
   post: allocated memory de-allocated
*/
void destroy() {
	//char** matrix = (char**)malloc(row * sizeof(char*));
	//for (int rowCounter = 0; rowCounter < sizeof(matrix); rowCounter++)
	//{
	//	printf("in %d", rowCounter);
	//	//free(matrix[rowCounter]);
	//}
	free(strings);

	printf("Matrix Destroyed (Memory DeAllocated)\n");
}

/* pre : str!=null and contains a string STR (\0 as sentinel), not
	 necessary dynamically allocated, storage exists
post: string STR stored in an available free storage slot and 1
	  returned, or 0 returned if there are no free storage slots.
*/
bool insert(char* str) {

	int inputLength = strlen(str);
	strings[0] = malloc(inputLength * sizeof(char));
	strcpy(strings[0], "1");

	strings[1] = malloc(inputLength * sizeof(char));
	strcpy(strings[1], "2");

	strings[2] = malloc(inputLength * sizeof(char));
	strcpy(strings[2], "3");

	strings[3] = malloc(inputLength * sizeof(char));
	strcpy(strings[3], "4");

	for (int i = 0; i < col; i++)
	{
		printf("%s", strings[i]);

	}






	for (int i = 0; i < row; i++)
	{
		//if last element is reached - return;
		if (strings[i] == '\0')
		{
			return;
		}
		else
		{
			// dynamically allocate enough space to store the the string, store the 
			// pointer to this block of memory in strings[i]
			strings[i] = malloc(inputLength * sizeof(char));
			strcpy(strings[i], str);
		}

	}

}

