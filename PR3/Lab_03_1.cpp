// Lab_03_1.cpp
// < Захарчук Олександр Анатолійович >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // Вхідний параметр
	double y; // Результат обчислення виразу
	double A; // Проміжний результат - функціонально стала частина виразу
	double B; // Проміжний результат - функціонально змінна частина виразу

	cout << "Enter x: "; cin >> x;
	
	A = (2 * abs(5 - x));

	// Спосіб №1: Розгалуження в скороченій формі
	
	if (x <= -1)
		B = exp(abs(2 + x));
	if (-1 <= x && x < 1)
		B = pow(sin(x), 2) * (1 / abs(2 + x));
	if (x >= 1)
		B = pow(cos(x), 2) / (1 + abs(sin(x)));

	y = A + B;
	cout << endl;
	cout << "First y = " << y << endl;
	// Спосіб №2: Розгалуження в повній формі

	if (x <= -1)
		B = exp(abs(2 + x));
	else
		if (x >= 1)
			B = pow(cos(x), 2) / (1 + abs(sin(x)));
		else
			B = pow(sin(x), 2) * (1 / abs(2 + x));


	y = A + B;
	cout << endl;
	cout << "Second y = " << y << endl;
	
	cin.get();
	return 0;
}