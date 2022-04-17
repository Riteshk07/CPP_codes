#include <iostream>
using namespace std;

bool isalfaa(int a){
	if(65<=a && a<=90 || 97<=a && a<=122){
		return true;
	}
	return false;
}

int main (){
	cout << isalfaa('A')<<endl;
	cout << isalfaa('a')<<endl;
	cout << isalfaa('1')<<endl;
	cout << isalfaa(']');


	return 0;
}