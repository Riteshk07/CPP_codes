#include <iostream>
using namespace std;

bool isspace_(int a){
	if(a==32){
		return true;
	}
	return false;
}

int main (){
	cout << isspace_('A')<<endl;
	cout << isspace_(' ')<<endl;
	cout << isspace_('.')<<endl;
	cout << isspace_(']');


	return 0;
}