#include <iostream>
#include <string>
using namespace std;

char tolowerr(int a){
	if(65<=a && a<=90){
		return char(a+32);
	}
	return a;
}

int main (){
	string x= "Ritesh@123";
	int n = x.size();
	for (int i=0; i<n; i++){
		cout << tolowerr(x[i]);
	}


	return 0;
}