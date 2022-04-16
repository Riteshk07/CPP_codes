#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

struct student{
	string fname;
	string lname;
	int age;
	string email;
};

student readdata(string fileName, int line){
	student s1;
	string a;
	ifstream myfile("name.txt"); 
	while (line--){
		getline(myfile, a);
	}
	int len = a.size();
	int end =0;
	for (int i=0; i<0; i++){
		end = str.find();
		s1.fname= str.substr()
	}
	
	

	
}

int main(){
	student s = readdata("db.csv", 5);

	cout << s.fname << endl;
	cout << s.lname << endl;
	cout << s.age << endl;
	cout << s.email << endl;

	return 0;
}