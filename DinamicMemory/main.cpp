#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);
int* push_back(int* arr, int& n, int value);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr=push_back(arr, n, value);
	Print(arr, n);

	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//обращение к массиву Через арифметику указателей и оператора разыменования
		*(arr + i) = rand() % 100;
	}
}

void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout<< endl;
}

int* push_back(int* arr, int& n, int value)
{
	//1 создаем буферныймассив нужого размера
	int* buffer = new int[n + 1];
	//2 скопировать содержимое исходного массиа в буфер
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3
	delete[] arr;
	//4 подменяем адрес исходного массива в казателе arr, адресом нового
	arr = buffer;
	//5 и только после этого можно писать вот так.
	arr[n] = value;
	//6 после того как мы добавили массив  в элемент, количество элементов увеличивается на 1
	n++;
	return arr;
}