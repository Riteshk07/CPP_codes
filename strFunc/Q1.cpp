#include <iostream>
using namespace std;

bool isalfanum(int a){
	if (57>=a && a>=48 || 65<=a && a<=90 || 97<=a && a<=122){
		return true;
	}
	return false;
}

int main (){
	cout << isalfanum('A')<<endl;
	cout << isalfanum('a')<<endl;
	cout << isalfanum('1')<<endl;
	cout << isalfanum(']');


	return 0;
}