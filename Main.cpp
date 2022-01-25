#include "Main.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a;
	cout << "Введите первое число: \n";
	cin >> a;

	float b;
	cout << "Введите второе число: \n";
	cin >> b;
	std::system("cls");

	if ( a > b ) {
		cout << "Да, " << "число " << a << " больше числа " << b << endl;
	}
	else
	{
		cout << "Нет, " << "число " << a << " меньше числа " << b << endl;
	}
	cout << "I " << "love " << "the sun " << "named " << "Nastya" << endl;
	
	system("pause");

	return 0;
}