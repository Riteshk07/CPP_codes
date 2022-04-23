#include <iostream>
using namespace std;

bool Acompare(int a, int b){
	return a>b;
}
bool Dcompare (int a , int b){
	return a<b;
}

bool checkSeq(int *begin, int *end, bool (*func)(int,int)){
	bool flag =true;
	for (int *i=begin; i != end-1; i++ ){
		if (func(*i,*(i+1))){
			return false;
		}
	}
	return flag;
}

int main (){
	int arr[] = {1, 2, 3, 4, 5, 90, 189, 289};

	cout << checkSeq(arr, arr+8, Dcompare)<<endl;
	cout << checkSeq(arr, arr+8, Acompare)<<endl;
	return 0;
}