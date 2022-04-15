#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (){
	string a;
	string b;
	cin>>a>>b;
	ofstream myfile("name.txt");
	myfile<<a<<","<<b<<"\n";
	myfile.close();
}