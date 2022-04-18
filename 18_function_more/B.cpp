#include <iostream>
using namespace std;

void printArray(const int *arr, int size){
	// for (int i = 0; i < size; i++){
	// 	cout << arr[i]++ << " ";
	// } // error: increment of read-only location '*(arr + ((sizetype)(((long long unsigned int)i) * 4)))'
	// cout << endl;
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int arr[5] = {1, 2, 3, 4, 5};

	printArray(arr, 5);

	for (int i = 0; i < 5; i++){
		cout << ++arr[i] << " ";
	}
	return 0;
}