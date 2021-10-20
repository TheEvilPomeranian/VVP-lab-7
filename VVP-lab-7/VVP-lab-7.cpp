﻿#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 1. \nДано значение угла a в градусах (0 < a < 360). \nОпределить значение этого же угла в радианах." << endl;
	double a;
	double const pi = 3.14;
	cout << "Введите значение для угла a в градусах, при условии, что (0 < a < 360): "; cin >> a;
	if (a > 0 && a < 360) {
		a = (a * pi) / 180;
		cout << "Значение угол a в радианах: " << a << endl;
	}
	else {
		cout << "Протеворечит условию задачи!" << endl;
	} 
	
	cout << "\nЗадача 2. \nДано значение угла a в радианах (0 < a < 2π). \nОпределить значение этого же угла в градусах." << endl;
	double const pii = 3.14;
	double aa;
	cout << "Введите значение для угла a в радианах, при условии, что (0 < a < 2pi) : "; cin >> aa;
	if (aa > 0 && aa < 2 * pii) {
		aa = (aa * 180) / pii;
		cout << "Значение угла в градусах: " << aa << endl;
	}
	else {
		cout << "Протеворечит условию задачи!" << endl;
	}

	cout << "\nЗадача 3.Известно, что X кг конфет стоит A рублей.\nОпределить, сколько стоит 1 кг и Y кг этих же конфет." << endl;
	double X, Y, A, B, C;
	int const q = 1;
	cout << "Введите количесвто кг X: "; cin >> X;
	cout << "Введите сумму A, которую заплатили за X кг: "; cin >> A;
	cout << "Введите количесвто кг Y, для которых необходимо узнать стоимость: "; cin >> Y;
	C = A / X;
	B = C * Y;
	cout << "1 кг конфет стоит: " << C << endl;
	cout << "Y кг конфет стоит: " << B << endl;

	cout << "\nЗадача 4. Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. \nОпределить расстояние между ними через T часов, если автомобили удаляются друг от друга. " << endl;
	double V1, V2, S, T, SS;
	cout << "Введите скорость V1 (помните, что скорость не может быть меньше нуля): "; cin >> V1;
	cout << "Введите скорость V2 (помните, что скорость не может быть меньше нуля): "; cin >> V2;
	cout << "Введите расстрояние S: "; cin >> S;
	cout << "Введите время T: "; cin >> T;
	SS = S + (V2 + V1) * T;
	cout << "Конечное расстояние между автомабилями: " << SS << endl;

	cout << "\nЗадача 5." << endl;
	double Aa, Bb, xx;
	cout << "Задайте число A не равное нулю: "; cin >> Aa;
	cout << "Задайте число B: "; cin >> Bb;
	if (Aa != 0) {
		xx = (-Bb) / Aa;
		cout << "Ответ для Ax + B = 0: x =  " << xx << endl;
	}
	else {
		cout << "Введенные значения противоречат условию задачи!" << endl;
	}

	cout << "\nЗадача 6. Решите систему:\nA1*x + B1*y = C1 \nA2*x + B2*y = C2" << endl;
	double x, y, A1, B1, C1, A2, B2, C2, D, D1, D2;
	cout << "Введите значение A1: "; cin >> A1;
	cout << "Введите значение B1: "; cin >> B1;
	cout << "Введите значение C1: "; cin >> C1;
	cout << "Введите значение A2: "; cin >> A2;
	cout << "Введите значение B2: "; cin >> B2;
	cout << "Введите значение C2: "; cin >> C2;
	D = A1 * B2 - A2 * B1;
	D1 = C1 * B2 - C2 * B1;
	D2 = A1 * C2 - A2 * C1;
	if (D != 0) {
		x = D1 / D;
		if (D2 == 0) {
			y = abs(D2 / D);
		}
		else {
			y = D2 / D;
		}
		cout << "x равен: " << x << endl;
		cout << "y равен: " << y << endl;
	}
	else {
		cout << "Ощибка! Определитель матрицы равен нулю! Решения нет." << endl;
	}
}
