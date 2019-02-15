//============================================================================
// Name        : synonims.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<set<string>> synon_v;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++ ) {
	string action;
	cin >> action;

		if (action == "ADD") {
			set<string> synon;
			synon.clear();
			string w1,w2;
			cin >> w1 >> w2;
			synon.insert(w1);
			synon.insert(w2);
			if (synon_v.size() == 0) {
				synon_v.push_back(synon);

			} else {
				for (auto s: synon_v) {
					if (s != synon) {
						synon_v.push_back(synon);
					}
				}

			}
		}
		else if (action == "COUNT") {
			string w;
			cin >> w;
			int count=0;
			for (auto s : synon_v ) {
				if (s.find(w) != s.end())
					count++;
			}
			cout << count << endl;

		}
		else if (action == "CHECK") {
			string w1,w2;
			cin >> w1 >> w2;
			int no=0;
			for (auto s : synon_v) {
				if (s.count(w1) != 0 && s.count(w2) != 0) {
					cout << "YES" <<endl;
					break;
				}
				else
					no=1;
			}
			if (no == 1)
				cout << "NO" << endl;

		}
	}
	return 0;
}
