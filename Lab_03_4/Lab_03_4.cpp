// Lab_03_4.cpp
// Лесюк Оксана
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 13


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R1;
	double R2;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;


	// розгалуження у повній формі

	if ((x <= 0 && y >= 0 && (x + R2) * (x + R2) + (y - R2) * (y - R2) <= R2 * R2) ||
		(x >= 0 && y <= 0 && (x + R2) * (x + R2) + (y - R2) * (y - R2) >= R2 * R2 && (x - R1) * (x - R1) + (y + R1) * (y + R1) <= R1 * R1))
		cout << "yes" << endl;
	else
		cout << "no" << endl;


	cin.get();
	return 0;
}