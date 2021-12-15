#include <iostream>
#include <string>
using namespace std;

int main(){
	string s[3] = {"apple", "orange", "banana"};


	// for (int i = 0; i < 3; i++)	{
	// 	cout << s[i] << endl;
	// }

	for (string fruits : s){
		cout << fruits << endl;		
	}
}