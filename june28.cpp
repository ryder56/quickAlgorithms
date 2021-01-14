//june 28th problem
/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int* productArray(int* array, int size);
void printArray(int* array, int size);

int main(int argc, char** argv){
	
	int* array;
	int size;
	size = 10;
	array = new int[size];
	
	for(int i = 0; i < size; i++){
		array[i] = i+1;
	}
	
	printArray(array, size);
	
	
	array = productArray(array, size);
	printArray(array, size);
	delete[] array;
	
	return 0;
}

int* productArray(int* array, int size){
	int* newArray = new int[size];
	int productValue = 1;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(j == i);
				//skip this iteration
			else
				productValue = productValue * array[j];
		}
		newArray[i] = productValue;
	}
	return newArray;
}

void printArray(int* array, int size){
	for(int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
