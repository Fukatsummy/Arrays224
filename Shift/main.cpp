#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
	int shift;
	cout << "Введите количество сдвигов: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	
	//Вывод сдвинутого массива на экран
	system("CLS");//Функция systems()выполняет любую команду командной строки
	//CLS- очищает экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	Sleep(1000);
	//приостаналивает выполнение проги на заданое число миллисикунд
	}
}