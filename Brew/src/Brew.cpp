//============================================================================
// Name        : Brew.cpp
// Author      : Egro Koamrov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void PauseSettings(map<int,int>& temp_time, int pause_count) {
//������� �� ���������� ����, ����������� ����� � ������� �����
	for (; pause_count !=0; pause_count-- ) {
		cout << "������� ������������ " << pause_count  <<  " �����" << endl;
		int temp;
		cin >> temp;
		cout << "������� ������������ (� �������) " << pause_count << " �����" << endl;
		int time;
		cin >> time;
		temp_time.insert(pair<int,int>(temp,time));
		}
	cout << "��� ����� ������� ��������� " << endl;
 }
void HopSettings(vector<int>& hop_time, int hop_count) {
//������ ������ ������ �����
	for (; hop_count !=0 ; hop_count --) {
		cout << "������� ����� " << hop_count << " ������ ����� (� ������� �� ��������� ���������) " << endl;
		int time;
		cin >> time;
		hop_time.push_back(time);
	}
	cout << " ����� ������ ����� ������� ������� " << endl;
}

int main() {

	//������� ����� ������������� ����?
	cout << "����� ����������!" << endl;
	cout << "������� ���������� ������������� ����" << endl;
	int pause_count;
	cin >> pause_count;
	map<int,int> temp_time;
	PauseSettings(temp_time, pause_count); // ����������� ������� ���������� ����������� = �����
	//����� ��������� ���� ������ ���� ��� ��� � ������ ����� ������ �����
	cout << "������� ����� ������� ��������� ����� (� �������) " << endl;
	int total_boil_time;
	cin >> total_boil_time;
	cout << "������� ��� ����� ����� �����?" << endl;
	int hop_count;
	cin >> hop_count;
	vector<int> hop_time;
	HopSettings(hop_time, hop_count); //���������� ������� ������������� � ������ �����

	cout << "������� ���� � ��������� ������� � ���������� ������" << endl;
	cout << "����� ���� ����� ���������, ������� ������ �����" << endl;
			//������ ���� �� t >4� ��� ������ �������� � temp_time
	cout << "�������� �����, ����� ���������� ������, ������� ������ �����" << endl;
			//����� ������������� ���� � �������������� �����������
	cout << "��������� ����� � �������� �������" << endl;
	cout << "�� ��������� ������� ������ �����" << endl;
			//��� ��� � ���������, ��� ������ c=95 ������ ���������
	cout << "�������� ������ ������ �����" << endl;
			//������ ���������� �����, ����� ����������� ����� ������ �����������
	cout << "����� ������, ���������� ����������, ������� �������� ����������� �����" << endl;
		int end_temp;
	cout << "�������� ������ � ������� ������ ����" << endl;
			//������ �������� ������, ��� ����������� ����� ����������

	cout << "��������� ����� � �������� �����" << endl;
	cout << "��� ����� �������� ���� :) " << endl;
	return 0;
}
