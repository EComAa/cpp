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
using namespace std;

int main() {

	vector<string> a= {"abc","cde"};
	map<int,vector<string>> m = {{10,{"abc","cde"}},{20,{"ads","zxc"}}};

	vector<string>::iterator it;
	map<int,vector<string>>::iterator it_m;
	it=a.begin();

	it_m=m.begin();

	string* s1 = &((*it_m).second[1]);
	*s1 = "HUI";
	//cout << s1 << endl;
	cout << m[10][1] << endl;

	//cout << (*it_m).second[1] << endl;

	//cout << *it << endl;
	return 0;
}
