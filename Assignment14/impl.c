#include "arraydatastore.h"
#define row 40

char** matrix;
void init(int col) {
	if (col <= 0)
	{
		printf("col has to be > 0!");
		return;
	}
	char** matrix = (char**)malloc(row * sizeof(char*));

	for (int rowCounter = 0; rowCounter < row; rowCounter++)
	{
		matrix[rowCounter] = malloc(col * sizeof(char));
	}
	printf("Matrix initialized (Memory allocated)\n");

}
void destroy() {
	/* pre : true
	   post: allocated memory de-allocated
	*/
	//char** matrix = (char**)malloc(row * sizeof(char*));

	for (int rowCounter = 0; rowCounter < sizeof(matrix); rowCounter++)
	{
		matrix[rowCounter] = malloc(col * sizeof(char));
	}

	printf("Matrix Destroyed (Memory DeAllocated)\n");

}

