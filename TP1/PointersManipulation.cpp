#include "PointersManipulation.h"

void Increment1(int n){
	n++;
}

void Increment2(int* n){
	(*n)++;
}

void Increment3(int& n){
	n++;
}