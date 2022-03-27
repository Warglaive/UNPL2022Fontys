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
int insertCounter = 0;
bool insert(char* str) {

	int strLength = strlen(str);

	for (int i = insertCounter; i < row; i++)
	{
		//if last element is reached - return;
		if (strings[i] == '\0')
		{
			return;
		}
		// dynamically allocate enough space to store the the string, store the 
		// pointer to this block of memory in strings[i]
		strings[i] = malloc(strLength * sizeof(char));
		strcpy(strings[i], str);
		insertCounter++;
		return;

	}
}
void print() {
	//PRINT Added values for test purposes
	if (strings != NULL)
	{
		for (int i = 0; i < insertCounter; i++)
		{
			printf("String at Index: %d = %s\n", i, strings[i]);
		}
	}

}
/// <summary>
///	Arrays in C are allocated as a fixed number of contiguous elements. 
/// There is no way to actually remove the memory used by an individual element 
/// in the array but the elements can be shifted to fill the hole made by removing an element.
/// </summary>
/// <param name="str"></param>
void deleteStr(char* str) {
	for (int i = 0; i < insertCounter; i++)
	{
		if (strcmp(strings[i], str) == 0)
		{
			strcpy(strings[i], strings[i + 1]);
			insertCounter--;
		}
	}
}
