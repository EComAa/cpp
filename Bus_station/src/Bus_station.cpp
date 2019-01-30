//============================================================================
// Name        : Bus_station.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>

using namespace std;

void NewBusFunc () {

}

void BusesForStopFunc () {

}

void StopsForBus () {

}

void  AllBusesfunc () {

}

int main() {
	int num;
	cin >> num;
	map<string,vector<string>> bus_map;
	string action;
	cin >> action;
	if (action == "NEW_BUS") {
		string bus_name;
		cin >> bus_name;
		int stop_count;
		cin >> stop_count;
		vector<string> bus_station;
		for (int i = 0; i < stop_count; i++ ) {
			string st;
			cin >> st;
			bus_station.push_back(st);
		}
	//	for (auto i: bus_station)
	//		cout << i << " ";
		bus_map[bus_name]=bus_station;
		NewBusFunc();
	}
	else if (action == "BUSES_FOR_STOP")
		BusesForStopFunc();
	else if(action == "STOPS_FOR_BUS")
		StopsForBus();
	else if (action == "ALL_BUSES")
		AllBusesfunc();

	return 0;
}
;
