#include"myVector.h"

void disp(const myVector<int> &v){
	for (myVector<int>::iterator it = v.begin(); it != v.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
}
