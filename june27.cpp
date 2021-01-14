//june 26th daily problem
/*
Good morning! Here's your coding interview problem for today.

This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


bool twoAddUp(int*, int, int);
void printArray(int*, int);

int main(int argc, char** argv){
	srand(time(NULL));
	int size = 100;
	int k = 20;
	int* array = new int[size];
	for(int i = 0; i <= size; i++){
		array[i] = rand() % 51;
	}
	printArray(array, size);
	
	bool a = twoAddUp(array, k, size);
	
	if(a)
		cout << "yes";
	else
		cout << "no";
	
	return 0;
}

bool twoAddUp(int* array, int k, int size){
	for(int i = 0; i < (size-1); i++){
		for(int j = (i+1); j < size; j++){
			if((array[i]+array[j]) == k){
				cout << i << " element: " << array[i] << " + " << j << " element: "<< array[j] << " = " << k << endl;
				return true;
			}
		}
	}
	return false;
}

void printArray(int* array, int size){
	for(int i = 0; i <= size; i++){
		cout << array[i] << " ";	
	}
	cout << endl;
}





