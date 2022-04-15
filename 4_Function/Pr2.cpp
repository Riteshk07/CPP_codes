#include <iostream>
using namespace std;

int main (){
	int marks;
	int noOfSub;
	cout<<"Enter No. of Subject: ";
	cin>>noOfSub;
	for (int i=1; i<noOfSub+1; i++){
		cout<< "Enter Sub "<<i <<" Marks: ";
		cin>>marks;
		do{
			cout<<"Enter one More Time"<<endl;
			cin>>marks;
		}
		while (marks<0 || marks>100);
	}
}	