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
//задание по количеству пауз, темперетуры паузы и времени паузы
	for (; pause_count !=0; pause_count-- ) {
		cout << "Введите темпереатуру " << pause_count  <<  " паузы" << endl;
		int temp;
		cin >> temp;
		cout << "Введите длительность (в минутах) " << pause_count << " паузы" << endl;
		int time;
		cin >> time;
		temp_time.insert(pair<int,int>(temp,time));
		}
	cout << "Все паузы успешно сохранены " << endl;
 }
void HopSettings(vector<int>& hop_time, int hop_count) {
//ввести таймер задачи хмеля
	for (; hop_count !=0 ; hop_count --) {
		cout << "Введите время " << hop_count << " задачи хмеля (в минутах от окончания кипячения) " << endl;
		int time;
		cin >> time;
		hop_time.push_back(time);
	}
	cout << " Время задачи хмеля успешно заданно " << endl;
}

int main() {

	//сколько будет температурных пауз?
	cout << "Добро пожаловать!" << endl;
	cout << "Введите количество температурных пауз" << endl;
	int pause_count;
	cin >> pause_count;
	map<int,int> temp_time;
	PauseSettings(temp_time, pause_count); // наполненеие таблицы значениями температура = пауза
	//после окончания пауз должен быть мэш аут и только потом задача хмеля
	cout << "Сколько будет длиться кипячение сусла (в минутах) " << endl;
	int total_boil_time;
	cin >> total_boil_time;
	cout << "Сколько раз будет задан хмель?" << endl;
	int hop_count;
	cin >> hop_count;
	vector<int> hop_time;
	HopSettings(hop_time, hop_count); //наполнение вектора напоминаниями о задаче хмеля

	cout << "Залейте воду и дождитесь сигнала о добавлении солода" << endl;
	cout << "когда вода будет добавлена, нажмите кнопку СТАРТ" << endl;
			//нагрев воды на t >4С чем первое значение в temp_time
	cout << "Добавьте солод, после добавления солода, нажмите кнопку СТАРТ" << endl;
			//старт температурных пауз с корректировкой температуры
	cout << "Извлеките солод и промойте дробину" << endl;
	cout << "По окончанию нажмите кнопку СТАРТ" << endl;
			//мэш аут и кипячение, как только c=95 выдать сообщение
	cout << "Добавтье первую порцию хмеля" << endl;
			//начало добавления хмеля, паузы температуры перед каждым добавлением
	cout << "Сусло готово, необходимо охлаждение, введите желаемую температуру сусла" << endl;
		int end_temp;
	cout << "Вставьте чиллер и начните подачу воды" << endl;
			//подать звуковой сигнал, как температура будет достигнута

	cout << "Аэрируйте сусло и добавтье дрожи" << endl;
	cout << "Это будет отличное пиво :) " << endl;
	return 0;
}
