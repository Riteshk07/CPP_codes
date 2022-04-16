#include <iostream>
#include <string>
using namespace std;

struct candyBar{
	string name;
	int dia; 
	int wth;
};

void display(candyBar A){
	cout<<"pizza Name : "<< A.name<<endl;
	cout<<"Diameter of pizza : "<< A.dia<<endl;
	cout<<"Weight of the pizza : "<< A.wth<<endl;
} 
int main (){

	candyBar P1 [3] ;
	display({"Domino" ,25,400});
	display({"Red Hat" ,40,600});
	display({"Domino" ,50,800});
}