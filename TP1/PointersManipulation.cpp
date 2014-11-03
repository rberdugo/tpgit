#include "PointersManipulation.h"

void Increment1(int p){
	n++;
}

void Increment2(int* n){
	(*n)++;
}

void Increment3(int& p){
	n++;
}