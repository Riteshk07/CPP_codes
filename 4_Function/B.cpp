#include <iostream>
using namespace std;

void printsqure(){
	cout<<"Squre"<<endl;
}
void printSqure(int a){
	cout<<a*a<<endl;
}

int main (){
	// void printSqure(int a){ // error
	// 	cout << a*a << endl;
	// }
	int a = 10;
	int b= 3;
	float c = 2.23f;
	printSqure()
	printSqure(a)
	return 0;
}

// void printSqure(int a){ // error
	// 	cout << a*a << endl;
	// }