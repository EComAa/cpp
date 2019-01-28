//============================================================================
// Name        : Capital.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>;

using namespace std;

void ChangeCapitalFunc() {

}

void RenameFunc () {

}

void AboutFunc() {

}

void DumpFunc() {

}

int main() {
	int num;
	cin >> num;
	string action;
	cin >> action;
	if (action == "CHANGE_CAPITAL") {
		string country, new_capital;
		cin >> country >> new_capital;
		ChangeCapitalFunc();
	}
	else if (action == "RENAME") {
		string old_country_name, new_country_name;
		cin >> old_country_name >> new_country_name;
		RenameFunc();
	}
	else if (action == "ABOUT") {
		string country;
		cin >> country;
		AboutFunc();
	}
	else if (action == "DUMP")
		DumpFunc();


	return 0;
}
