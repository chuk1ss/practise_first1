#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define rows 3
#define cols 3



typedef struct{
	int** array;
	int r;
	int c;

}cr;

cr create_Arr(void);
void values(cr values);
void printArray(cr values);
void freeArr(arr);

