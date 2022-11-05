#include<iostream>
using namespace std;

int Power(int a, int b); //Прототип функции//Объявление фукнции


void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	cout << "Введите основание: "; cin >> a;
	cout << "Введите показатель: "; cin >> b;
	cout << a << "^" << b << "=" << Power(a, b) << endl;   // Вызов функции (Function call)

}

int Power(int a, int b) // Реализация функции (Function defenition)
{
	int c = 1;
	for (; b; b--)
	c = c*a;
	return c;
}



