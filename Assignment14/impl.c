#include "arraydatastore.h"
#define row 40
//char matrixStorage[NUMBER_OF_STRING][MAX_STRING_SIZE];
#define NUMBER_OF_STRING

char** matrix;
void init(int col) {
	char** matrix = (char**)malloc(row * sizeof(char*));

	for (int rowCounter = 0; rowCounter < row; rowCounter++)
	{
		matrix[rowCounter] = malloc(col * sizeof(char));
	}
}
