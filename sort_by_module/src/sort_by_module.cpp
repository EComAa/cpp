//============================================================================
// Name        : sort_by_module.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cctype>


using namespace std;

bool comprFunc(string s1, string s2){
	for (auto& c : s1) {
		//cout << c << endl;
		c=tolower(c);
	}
	for (auto& c : s2){
		c=tolower(c);
		// cout << c << endl;
	}

	if ( s1 < s2) {
		//cout <<s1 << " " << s2;
		return true;
	} else {
		//cout <<s1 << " " << s2;
		return false;
	}
	cout << endl;
}

int main () {
	int num;
	cin >> num;
	string arr[num];

	for (int i = 0; i < num; i++){
		string s;
		cin >> s;
		arr[i] = s;
	}

	sort(arr,arr+num,comprFunc);

	for (int i = 0; i < num; i++)
		cout << arr[i] << " ";

	return 0;
}
