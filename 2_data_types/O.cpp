#include <iostream>
#include <cmath>
using namespace std;

int main(){
	char op;
	float n1, n2;
	cout<<"Enter Operator: ";
	cin>>op;
	cout<<"enter two num: ";
	cin>>n1>>n2;

	switch (op){
		case '+':
		cout<<n1<<" + "n2<<" = "<<n1=n2;
		break
		case '-':
		cout<<n1<<" - "n2<<" = "<<n1-n2;
		break
		case '*':
		cout<<n1<<" * "n2<<" = "<<n1*n2;
		break
		case '/':
		cout<<n1<<" / "n2<<" = "<<n1/n2;
		break
	}
}