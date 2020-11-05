// Lab3.4.cpp
// < Біліонок Ярослав >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 3.4
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if (y >= -R && y <= R && x >= 0 && x <= y)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}