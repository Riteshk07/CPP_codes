#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (){
	string a;
	ifstream myfile("name.txt");
	getline(myfile, a);
	cout<< a <<endl;
	getline(myfile, a);
	cout<< a <<endl;

	myfile.close();
	// cout<< a ;
}