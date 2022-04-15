#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (){
	string a;
	ifstream myfile("name.txt");
	myfile>> a;
	myfile.close();
	cout<< a ;
}