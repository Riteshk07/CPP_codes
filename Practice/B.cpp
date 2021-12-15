#include <iostream>
using namespace std;
int main(){
	int saving ;
	cin>>saving;
	if (saving>5000){
		if (saving>10000){
			cout<< "Roadtrip with neha\n";
		} else {
			cout<< "shoping\n";
		}
		cout<<"neha"<<endl ;
	}
	else if (saving>2000){
		if (saving>4000){
			cout<< "Shoping with Rashmi\n";
		} else {
			cout<< "watch movie with rashmi\n";
		}
		cout<<"rashmi"<<endl ;
	} else {
		if (saving>1000){
			cout<< "I will go to watch movie with raj\n";
		} else {
			cout<< "Go to park\n";
		}
		cout<< "Friend"<<endl;
	}

     return 0;
}