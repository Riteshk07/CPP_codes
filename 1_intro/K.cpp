#include <iostream>
using namespace std;
int main()
{
	char arr[] = "Ritesh koshta";
	int sum = 0;
	for (int a = 0; a<13; a++){
		sum = sum+arr[a];
		// cout << sum << endl;
		if (a % 2  == 0){
			cout<<"she Loves me "<< endl;
		}
		else {
			cout << "she loves me not "<< endl;
		}
	}


}