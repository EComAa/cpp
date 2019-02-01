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



void BusesForStopFunc (const map<string,vector<string>>& bus_map,const string& station) {
	vector<string> enum_bus;

	for (auto i : bus_map) {
		for (auto s : i.second) {
			if (s == station)
				enum_bus.push_back(i.first);
		}
	}
	if( enum_bus.size() != 0 ) {
		for (auto i : enum_bus)
			cout << i << " ";
	}
	else
		cout << "No stop";
	cout << endl;
}

void StopsForBus (map<string,vector<string>>& bus_map, const string& bus) {
	map<string,vector<string>> interchange;  // pair   bus : station, station, station ...

	if (bus_map.find(bus) == bus_map.end())
		cout << "No bus" << endl;
	else {
	vector<string> station = bus_map[bus];    //�������� ��� ��������� � ������
	vector<string> un_station;
	for (auto st : station) { // ����� ���������� ��������� ������� ���������

		for ( auto i : bus_map) { // ��� ������� ��������

		  for (auto s : i.second) { // ������ ������ �� ��� ���������
			if (st == s && i.first != bus) { // ���� ��������� �� ������ ������� �������� ��������� � ���������� ������� �������� �� ���������
				un_station.push_back(i.first);
				interchange[s]=un_station;
			}
		}
		 if (interchange.size() == 0 )
			cout << i.first << " : no interchange" << endl;
		 else {
		 for (auto i : interchange) {
			cout << endl << "Stop " << i.first <<": ";
			for (auto stop : i.second)
				cout << " " << stop;
		 }
	  }
	  un_station.clear();

	}
	}
	if (interchange.size() == 0 && bus_map.find(bus) != bus_map.end())
		cout << "No interchange";
	else {
		for (auto i : interchange) {
			cout << endl << "Stop " << i.first <<": ";
			for (auto stop : i.second)
				cout << " " << stop;
		}
	}
	}

}

void  AllBusesfunc (const map<string,vector<string>>& bus_map) {
	if (bus_map.size() == 0)
		cout << "No buses" << endl;
	else {
		for (auto i : bus_map) {
			cout << endl << "Bus " << i.first << ": ";
			for (auto s : i.second)
				cout << s << " ";
		}
	}


}

int main() {
	int num;
	cin >> num;
	map<string,vector<string>> bus_map;

	for ( int i = 0; i < num; i++) { // ����������� ������ ������ �����
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
	}
	else if (action == "BUSES_FOR_STOP") {
		string station;
		cin >> station;
		BusesForStopFunc(bus_map, station);
	}
	else if(action == "STOPS_FOR_BUS") {
		string bus;
		cin >> bus;
		StopsForBus(bus_map, bus);
	}
	else if (action == "ALL_BUSES")
		AllBusesfunc(bus_map);

	} //����������� ������ ������ �����
	return 0;

}

