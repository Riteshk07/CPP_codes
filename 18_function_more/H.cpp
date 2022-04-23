#include <iostream>
using namespace std;

bool gcompare(int a, int b){
	return a>b;
}
bool lcompare (int a , int b){
	return a<b;
}

int main (){
	int arr[] = {1, 2, 3, 4, 5, 90, 189, 289};
	bool (*p)(int ,int) = lcompare; // function pointer

	cout << (*p)(10,20)<<endl;
	cout << p(10,20)<<endl;
	cout << lcompare(10,20)<<endl;



	return 0;
}