#include "arraydatastore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define row 40
// used to store a dynamically allocated array of pointers to char

char** strings;
void init(int n) {
	if (n <= 0)
	{
		printf("col has to be > 0!");
		return;
	}
	strings = malloc(row * sizeof(char*));

	for (int rowCounter = 0; rowCounter < row; rowCounter++)
	{
		strings[rowCounter] = malloc(n * sizeof(char*));
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

	int matrixLength = strlen(str);
	if (matrixLength > 0)
	{
		for (int i = 0; i < matrixLength; i++)
		{
			// dynamically allocate enough space to store the the string, store the 
			// pointer to this block of memory in strings[i]
			strings[i] = malloc(matrixLength * sizeof(char));
		}
	}
}

