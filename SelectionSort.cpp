// SelectionSort.cpp 

#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int arr[], int SIZE);
int main()
{
	const int SIZE = 5;
	int arr[SIZE] = { 12,99,3,66,45 };
	cout << "Unsorted array: ";
	for (int num : arr) {
		cout << num << ",";
	}
	cout << endl;
	selectionSort(arr, SIZE);
	/*cout << "Sorted array: ";
	for (int num : arr)
		cout << num << ",";*/
   
}
void selectionSort(int arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		int min = i;
		for (int j = i + 1; i < SIZE; i++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;;
	}
	for (int i =0; i < SIZE; i++)
		cout << arr[i] << ",";
}

