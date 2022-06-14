#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	arr[2] = 123;
	//Ввод масива с клавиатуры
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Вывод массива на экран в обратном порядке
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое: " << (double)sum / n << endl;

	//Поиск мин и махзначения в массиве
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "MIN : " << min << endl;
	cout << "MAX : " << max << endl;
}