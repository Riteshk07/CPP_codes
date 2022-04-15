#include <iostream>
#include <string>
using namespace std;

int main (){
	string a = "Adrenal Vision International producer Adrienne Vismonger announced production of their new 3-D film, a remake of 'My Dinner with Andre,' scheduled for 2013. 'Wait until you see the the new scene with an enraged Collossipede!";
	int punt=0; 
	int upper=0;
	int lower=0;
	int space=0;
	int alnum=0;
	int digit =0;
	for (int i=0; a.size()>i; i++){
		if (ispunct(a[i])!=0){
			punt++;
		}if (isspace(a[i])!=0){
			space++;
		}if (isupper(a[i])!=0){
			upper++;
		}if (isalnum(a[i])!=0){
			alnum++;
		}if (islower(a[i])!=0){
			lower++;
		}if (isdigit(a[i])!=0){
			digit++;
		}

	}
	cout<<punt<<" - puntutation"<<endl;
	cout<<upper<<" - Upper"<<endl;
	cout<<lower<<" - Lower"<<endl;
	cout<<space<<" - Space"<<endl;
	cout<<alnum<<" - Alnum"<<endl;
	cout<<digit<<" - Digit"<<endl;
	return 0;
}