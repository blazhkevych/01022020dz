/*
Домашнее задание № 5 Курс «Язык программирования C»
Встреча №10
Тема : Циклы Домашнее задание

Задание 1. Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a вводится с клавиатуры).
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите a: ";
	int a, sum = 0;
	cin >> a;
	for (int i = a; i <= 500; i++)
	{
		sum = sum + i;
	}
	cout << "Сумма целых чисел от а до 500 = " << sum;
	return 0;
}
*/
/*
Задание 2. Напишите программу, которая запрашивает два целых числа x и y, после чего вычисляет и выводит значение x в степени y.
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int x, y, cycle = 1, total = 1;
	cout << "Введите число x: ";
	cin >> x;
	cout << "Введите степень y: ";
	cin >> y;
	if (y <= 0 || x == 0)
	{
		cout << "Неверные данные, проверте число \n";
		return 1;
	}
	while (cycle <= y)
	{
		total = total * x;
		cycle++;
	}
	cout << x << " в степени " << y << " = " << total << "\n";
	return 0;
}
*/
/*
Задание 3. Найти среднее арифметическое всех целых чисел от 1 до 1000.
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double s, i, r;
	s = 0.0;
	for (i = 1.0; i <= 1000.0; i += 1.0)
		s += i;
	r = s / 1000.0;
	cout << "Среднее арифметическое всех целых чисел от 1 до 1000 = " << r;
	return 0;
}
*/
/*
Задание 4. Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры : 1 <= a <= 20).
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	long long r = 1;
	int a;
	cout << "Введите число a: ";
	cin >> a;
	for (int i = a; i <= 20; i++)
		r = r * i;
	cout << "Произведение всех целых чисел от a до 20 = " << r << endl;
	return 0;
}
*/
/*
Задание 5. Написать программу, которая выводит на экран таблицу умножения на k, где k – номер варианта.Например, для 7 - го варианта : 7 x 2 = 14 7 x 3 = 21
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int k;
	cout << " Введите номер варианта: ";
	cin >> k;
	for (int i = 1; i <= 10; i++)
	{
		cout << k;
		cout << " * ";
		cout << i;
		cout << " = ";
		cout << k * i << endl;
	}
	return 0;
}
*/