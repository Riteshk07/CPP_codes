#include <iostream>
using namespace std;

/*
increasing by 2 blocks 
like this
        *
      * * *
    * * * * *
  * * * * * * *
*/

int main (){
	int block;
	cin>>block;
	int height = 0;
	int layer =1;
	while (layer<=block){
		height += 1;
		block -= layer;
		layer += 2;
	}

	cout<<"Height of the piramid: "<<height<<endl;
	return 0;
}