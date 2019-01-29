//============================================================================
// Name        : Capital.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>

using namespace std;

void ChangeCapitalFunc(const string& country, const string& new_capital, map<string,string>& c_info) {

	//map<string,string> :: iterator it;
	//it = c_info.find(country);
	if (c_info.find(country) == c_info.end()) {
		cout << "Introduce new country " << country << " with capital " << new_capital << endl;
		c_info[country]=new_capital;
	}
	else if (c_info.find(country)->second == new_capital)
		cout << "Country " << country << " hasn't changed its capital" << endl;
	else if (c_info.find(country)->second != new_capital)
		cout << "Country " << country << " has changed its capital from " << c_info[country] << " to " << new_capital << endl;


}

void RenameFunc (const string& old_country_name, const string& new_country_name, map<string,string>& c_info) {

}

void AboutFunc() {

}

void DumpFunc() {

}

int main() {
	int num;
	cin >> num;
	map<string,string> c_info;
	string action;
	for (int i = 0; i < num; i++) {
	cin >> action;
	if (action == "CHANGE_CAPITAL") {
		string country, new_capital;
		cin >> country >> new_capital;
		ChangeCapitalFunc(country,new_capital,c_info);
	}
	else if (action == "RENAME") {
		string old_country_name, new_country_name;
		cin >> old_country_name >> new_country_name;
		RenameFunc(old_country_name,new_country_name,c_info);
	}
	else if (action == "ABOUT") {
		string country;
		cin >> country;
		AboutFunc();
	}
	else if (action == "DUMP")
		DumpFunc();

	}
	return 0;
}
