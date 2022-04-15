#include <iostream>
#include <string>
using namespace std;

int main(){
	string s = "1.1.1.1";
	for (int i =0; i<s.length(); i++){
        if (s[i]== '.'){
            s.insert(i,"[.]");
        }
    }
    cout<<s;
}