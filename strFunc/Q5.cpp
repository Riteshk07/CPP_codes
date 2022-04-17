#include <iostream>
using namespace std;

bool ispunc(int a){
	if(33<=a && a<=47 || 58<=a && a<=64 || 91<=a && a<=96 || 123<=a && a<=126){
		return true;
	}
	return false;
}

int main (){
	cout << ispunc('A')<<endl;
	cout << ispunc('0')<<endl;
	cout << ispunc('.')<<endl;
	cout << ispunc(']');


	return 0;
}