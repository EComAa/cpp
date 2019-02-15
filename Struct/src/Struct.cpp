//============================================================================
// Name        : Struct.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    // добавить факт изменения имени на first_name в год year
	if (person.find(year) == person.end())
		person[year]={first_name,""};
	else {
		string surname;
		surname = person[year][1];
		person[year] = {first_name,surname};
	}
  }
  void ChangeLastName(int year, const string& last_name) {
    // добавить факт изменения фамилии на last_name в год year
	if (person.find(year) == person.end())
		person[year] = {"", last_name };
	else {
		string name;
		name = person[year][0];
		person[year]={name,last_name};
	}
  }
  string GetFullName(int year) {
	  //отсортировать по году, найти итератор на текущий год, сделать дикремент итератору, глянуть там фамилию или имя
	  map<int,vector<string>>::iterator it;
	  it=person.find(year);
	  if (it == person.end()) {
    	string s = "No change in this year";
    	return s;
	  }
	  else if ((*it).second[0] == "") {
    	string s="dsd";
    	return s;
      }
	  else if ((*it).second[1] == "") {
		  string s="qweq";
		  return s;
	  }

  }
private:

  map<int,vector<string>> person;

};

int main() {
  Person person;

  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullName(year) << endl;
  }

  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }

  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }

  return 0;
}

