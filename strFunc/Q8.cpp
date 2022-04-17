#include <iostream>
#include <string>
using namespace std;

char toupperr(int a){
	if(97<=a && a<=122){
		return char(a-32);
	}
	return a;
}

int main (){
	string x= "Ritesh@123";
	int n = x.size();
	for (int i=0; i<n; i++){
		cout << toupperr(x[i]);
	}


	return 0;
}