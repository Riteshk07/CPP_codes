#include <iostream>
using namespace std;

bool islowerr(int a){
	if(97<=a && a<=122){
		return true;
	}
	return false;
}

int main (){
	cout << islowerr('A')<<endl;
	cout << islowerr('0')<<endl;
	cout << islowerr('a')<<endl;
	cout << islowerr(']');


	return 0;
}