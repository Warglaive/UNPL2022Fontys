#include "arraydatastore.h"
#include <stdio.h>
#include <stdlib.h>
#define row 40

char** matrix;
void init(int n) {
	if (n <= 0)
	{
		printf("col has to be > 0!");
		return;
	}
	char** matrix = (char**)malloc(row * sizeof(char*));

	for (int rowCounter = 0; rowCounter < row; rowCounter++)
	{
		matrix[rowCounter] = malloc(n * sizeof(char));
	}
	printf("Matrix initialized (Memory Allocated)\n");

}
void destroy() {
	/* pre : true
	   post: allocated memory de-allocated
	*/
	//char** matrix = (char**)malloc(row * sizeof(char*));
	//for (int rowCounter = 0; rowCounter < sizeof(matrix); rowCounter++)
	//{
	//	printf("in %d", rowCounter);
	//	//free(matrix[rowCounter]);
	//}
	free(matrix);

	printf("Matrix Destroyed (Memory DeAllocated)\n");

}

