//============================================================================
// Name        : iterator.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
	map<int,vector<string>> m={{0,{"first"}},{1,{"second"}},{2,{"fird"}},{3,{"foth"}}};

	map<int,vector<string>>::iterator it;
	it=m.lower_bound(-1);
	map<int,vector<string>>::reverse_iterator itr(it);
	itr--;
//	if(m.end() == it) {
//		cout << it->first << " it ";
//		cout << "it is pointer of end of massive" << endl;
//		itr=m.rbegin();

//	}
//	else if (m.begin() == it) {
//		cout << it->first << " it ";
//		cout << "it is pointer of begin of massive" << endl;
//		itr=m.rend();
//		itr--;
//	} else
//		itr--;
//	cout << it->first << " it" << endl;
//	map<int,vector<string>>::reverse_iterator itr(it);
//	itr=m.lower_bound(10);
//	itr++;


	cout << itr->first << " itr" << endl;
	for (; itr != m.rend(); itr++)
		cout << itr->second[0] << endl;
	vector<string> v;
	unique(v.begin(),v.end());

	return 0;
}
