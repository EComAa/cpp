//============================================================================
// Name        : courcera.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <map>
using namespace std;


void CompareFunc(map<char,int>& char_one, map<char,int>& char_two){
	int i=0;
	for(auto c : char_one) {
	//	cout << c.first << " " << c.second << endl;
	//	cout << char_two[c.first];
		if (c.second != char_two[c.first]) {
			cout << "NO" << endl;
			break;
		} else
			i++;
	}
	if (i !=0 )
		cout << "YES" << endl;
	char_one.clear();
	char_two.clear();
}

void CharCountFunc (string& one, string& two){
	map<char,int> char_one;
	map<char,int> char_two;
	vector<char> symbol;
	for (int i=0; i < one.size(); i++){ //разбиваем строку на символы для первого слова
		 symbol.push_back(one[i]);
	}
	for (auto s : symbol) // считаем количество символов для первого слова
		++char_one[s];

	symbol.clear();

	for (int i=0; i < two.size(); i++) //разбивает вторую строку на символы
		symbol.push_back(two[i]);

	for (auto s : symbol) // считаем количество вхождения каждого символа для второй строки
		++char_two[s];

/*	for (auto i : char_one)
		cout  << i.first << " " << i.second << endl;
	cout << "_________________" << endl;
	for (auto i : char_two)
			cout  << i.first << " " << i.second << endl;
*/
	CompareFunc(char_one, char_two);
}



int main () {
	int num;
	cin >> num;
	for (int i = 0; i < num ; i++) {
		string one,two;
		cin >> one >> two;
		CharCountFunc(one,two);
	}

	return 0;
}

