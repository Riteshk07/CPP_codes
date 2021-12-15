#include <iostream>
using namespace std; 
int main()
{
	float a= 20.2; 
	decltype(a) b= a+a;
	decltype(a) c= a*b;
	cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}