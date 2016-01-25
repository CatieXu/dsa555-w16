#include "tslist.h"
#include <iostream>
using namespace std;
int main(void){
	SList<int> mylist;
	mylist.pushFront(10);
	mylist.pushFront(20);
	mylist.pushBack(30);

	for(auto it=mylist.begin();it!=mylist.end();++it){
		cout << *it << endl;
	}
	return 0;

}