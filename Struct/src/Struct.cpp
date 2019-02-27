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
#include <cctype>
using namespace std;

class Person {
public:
 void ViewAllMap () {
	 for (auto pole: person) {
	 		  cout << pole.first << " " << pole.second[0] << " " << pole.second[1] << endl;
	 	  }
 }
 void ChangeFirstName(int year, const string& first_name) {
	if (person.find(year) != person.end()) {
		string second_name;
		second_name = person[year][1];
		person[year]={first_name,second_name};
	}
	else
		person[year]={first_name,"NO_SURNAME"};

  }
 void ChangeLastName(int year, const string& last_name) {
		if (person.find(year) != person.end()) {
			string first_name;
		first_name = person[year][0];
			person[year]={first_name,last_name};
	}
		else
			person[year]={"NO_NAME",last_name};
  }

 string GetFullNameWithHistory(int year) {

	 map<int,vector<string>>::iterator it;
	 it=person.lower_bound(year);
	 map<int,vector<string>>::reverse_iterator itr(it);
	 if (it == person.begin()) {
		 itr=person.rend();
		 if (person.count(year) != 0)
			 itr--;
	 } else if (it == person.end())
		 itr=person.rbegin();
	  else if (person.count(year) != 0)
		 itr--;

	 string name="";
	 string surname="";

	 map<int,vector<string>>::reverse_iterator itr_name=itr;

	 for(; itr_name != person.rend(); itr_name++) {
		if ((*itr_name).second[0] != "NO_NAME") {
			name = (*itr_name).second[0];
			break;
		}
	 }
	 //добавить продолжение итерации, с сохранением всех изменений в вектор)
	 vector<string> name_change;
	 itr_name++;
	 for(; itr_name != person.rend(); itr_name++) {
	 		if ((*itr_name).second[0] != "NO_NAME" && (*itr_name).second[0] != name) {
	 			name_change.push_back((*itr_name).second[0]);
	 		}
	 	 }
	 unique(name_change.begin(),name_change.end());
	 for(; itr != person.rend(); itr++) {
	 	if ((*itr).second[1] != "NO_SURNAME") {
	 		surname = (*itr).second[1];
	 		break;
	 	}
	 }
	 //добавить продолжение итерации, с сохранением всех изменений в вектор)
	 vector<string> surname_change;
	 itr++;
	 for(; itr != person.rend(); itr++) {
		 	if ((*itr).second[1] != "NO_SURNAME" && (*itr).second[1] != surname) {
		 		surname_change.push_back((*itr).second[1]);

		 	}
	 }
	 unique(surname_change.begin(),surname_change.end());

	 if (name == "" && surname == "")
		 return "Incognito";
	 else if (name == "" && surname != "") {
		cout << surname;
		if (surname_change.size() != 0) {
			cout << " (";
			for (auto s : surname_change)
				cout << s << " ";
			cout <<")";
		}
		cout << " with unknown first name";
	 return "";
	 }
	 else if (name != "" && surname == "") {
		 cout << name;
		 if (name_change.size() != 0) {
		 			cout << " (";
		 			for (auto s : name_change)
		 				cout << s << "";
		 			cout <<")";
		 		}
		 cout << " with unknown last name";
	 return "";
	 }
 	 cout << name << " ";
 	 if (name_change.size() != 0) {
 			cout << "(";
 			for (auto s : name_change)
 			cout << s << "";
 	 cout <<") ";
 	 }
 	 cout << surname << "";
 	if (surname_change.size() != 0) {
 				cout << "(";
 				for (auto s : surname_change)				//РАЗОБРАТЬСЯ С ЗАПЯТЫМИ!!!!!
 					cout << s << "";
 				cout <<")";
 		}


return "";

 }
 string GetFullName(int year) {
	 map<int,vector<string>>::iterator it;
	 it=person.lower_bound(year);
//	 cout << endl << it->first << endl;
	 map<int,vector<string>>::reverse_iterator itr(it);
	 if (it == person.begin()) {
		 itr=person.rend();
		 if (person.count(year) != 0)
			 itr--;
	 } else if (it == person.end())
		 itr=person.rbegin();
	  else if (person.count(year) != 0)
		 itr--;

	 string name="";
	 string surname="";

	 map<int,vector<string>>::reverse_iterator itr_name=itr;
//	 cout << endl << itr->first << endl;
	 for(; itr_name != person.rend(); itr_name++) {
		if ((*itr_name).second[0] != "NO_NAME") {
			name = (*itr_name).second[0];
			break;
		}
	 }
	 //добавить продолжение итерации, с сохранением всех изменений в вектор)
	 vector<string> name_change;
	 itr_name++;
	 for(; itr_name != person.rend(); itr_name++) {
	 		if ((*itr_name).second[0] != "NO_NAME") {
	 			name_change.push_back((*itr_name).second[0]);
	 		}
	 	 }

	 for(; itr != person.rend(); itr++) {
	 	if ((*itr).second[1] != "NO_SURNAME") {
	 		surname = (*itr).second[1];
	 		break;
	 	}
	 }
	 //добавить продолжение итерации, с сохранением всех изменений в вектор)
	 vector<string> surname_change;
	 itr++;
	 for(; itr != person.rend(); itr++) {
		 	if ((*itr).second[1] != "NO_SURNAME") {
		 		surname_change.push_back((*itr).second[1]);

		 	}
	 }

 if (name == "" && surname == "")
		 return "Incognito";
	 else if (name == "" && surname != "") {
		//string s="";
		//s+=surname;
		cout << surname;
/*		if (surname_change.size() != 0) {
			cout << " (";
			for (auto s : surname_change)
				cout << s << " ";
			cout <<")";
		}
		cout << " with unknown first name";
*/		//cout << surname_change.size();
	 return "";
	 }
	 else if (name != "" && surname == "") {
		// string s="";
		 cout << name;
/*		 if (name_change.size() != 0) {
		 			cout << " (";
		 			for (auto s : name_change)
		 				cout << s << " ";
		 			cout <<")";
		 		}
		 cout << " with unknown last name";
*/	 return "";
	 }
 	 cout << name << " ";
 /*	 if (name_change.size() != 0) {
 			cout << "(";
 			for (auto s : name_change)
 			cout << s << " ";
 	 cout <<") ";
 	 }
 */
 	 cout << surname << " ";
/*   if (surname_change.size() != 0) {
 				cout << "(";
 				for (auto s : surname_change)
 					cout << s << " ";
 				cout <<") ";
 		}
*/
 	 //string s="";
 	 //s+=name;
 	 //s+=" ";
 	 //s+=surname;

return "";
 }
private:
  map<int,vector<string>> person;

};

int main() {
  Person person;

  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  person.ChangeFirstName(1990, "Polina");
  person.ChangeLastName(1990, "Volkova-Sergeeva");
  cout << person.GetFullNameWithHistory(1990) << endl;

  person.ChangeFirstName(1966, "Pauline");
  cout << person.GetFullNameWithHistory(1966) << endl;

  person.ChangeLastName(1960, "Sergeeva");
  for (int year : {1960, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  person.ChangeLastName(1961, "Ivanova");
  cout << person.GetFullNameWithHistory(1967) << endl;

  return 0;
}


