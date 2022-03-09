#include <iostream>

// collection of variable, function, classes etc.
namespace mySpace{
	int var =45;
	int myAge=21;
}


int main (){
	

	int var;              		// local variable 
	std::cin >> var;
	std::cout << "var in local   : " << var << std::endl;
	std::cout << "var in mySpace : " << mySpace::var << std::endl;
	return 0;
}