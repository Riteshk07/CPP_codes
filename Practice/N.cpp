/*
C style Comments
or Multi line comments
*/

// C++ 
// Single line comment

# include <iostream>
using namespace std;

int main(){
// 	cout  /* THIS IS COUT */ << /* THIS IS << */ "hello World!";	// this is string

	// cout   </* THIS IS << */<  "hello World!";	//  error: expected primary-expression before '<' token

	// co/* THIS IS cout */ut   <<  "hello World!";	//  error: 'co' was not declared in this scope

	cout   <<  "hello /* This is comment */ World!";
	return 0;
}