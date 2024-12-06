#include <iostream>

void Fillarray(int* const arr, const int size) {

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(int* arr, const int size) {

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void push_back(int*& arr, int &size, int value) {
	int* arr2 = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[size] = value;

	size++;

	delete[] arr;

	arr = arr2;
}
void pop_back(int*& arr, int &size) {
	size--;
	int* arr2 = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}

	delete[] arr;
	
	arr = arr2;
}

//void main() {
//
//	int size = 6;
//	int* arr = new int[size];
//
//	Fillarray(arr, size);
//	pop_back(arr, size);
//	ShowArray(arr, size);
//
//	delete[] arr;
//
//
//
//
//
//}