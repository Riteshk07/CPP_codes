#include <iostream>
using namespace std;


#define kg 2.204


int main(){
	float c;
	int a,b;
	cout<<"Enter your high 'feet' then 'inch': ";
	cin>>a>>b;
	cout<< "Enter your Weight(kg): ";
	cin>>c;
	float thight=a*12+b;
	float lbs = kg*2.20462;
	
	cout<<"Your BMI is: "<<(703*c*kg)/(thight*thight)<<endl;
}

// int main(){
	
// }