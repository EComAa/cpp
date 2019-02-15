//============================================================================
// Name        : bus_station_3.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
	map<set<string>,int> bus_map;
	bus_map.clear();
	set<string> b_station;
	int bus_count=1;
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int count;
		cin >> count;
		b_station.clear();



		for (int j = 0; j < count; j++) {
			string station;
			cin >> station;
			b_station.insert(station);
		}

		if (bus_map.find(b_station) == bus_map.end() ) {
			cout <<"New bus " << bus_count << endl;
			bus_map[b_station] = bus_count;
			bus_count=bus_map.size()+1;
		} else {
			cout << "Already exists for " << bus_map[b_station] << endl;
		}



	}
	return 0;
}
