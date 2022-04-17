#include <iostream>
using namespace std;

bool isdigitt(int a){
	if(57>=a && a>=48){
		return true;
	}
	return false;
}

int main (){
	cout << isdigitt('A')<<endl;
	cout << isdigitt('0')<<endl;
	cout << isdigitt('1')<<endl;
	cout << isdigitt(']');


	return 0;
}