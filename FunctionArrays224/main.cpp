#include<iostream>
using namespace std;

#define tab "\t"

const int ROWS = 3;
const int COLS = 4;


void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
//void FillRand(int arr[ROWS][COLS],const int ROWS, const int COLS);

template <typename T>void Print(T arr[], const int n);
template <typename T>void Print( T arr[], const int n);
//void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>void Sort(T arr[], const int n);
template <typename T>void Sort(T arr[], const int n);

template <typename T>T Sum(T arr[], const int n);
template <typename T>T Sum(T arr[], const int n);

template <typename T>double Avg(T arr[], const int n);
template <typename T>double Avg(T arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(arr, n) << endl;
	
	const int SIZE = 8;
	double brr[ SIZE ];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;

	
	/*int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);*/
}


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

template <typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
//template <typename T>void Print(T arr[], const int n){
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << tab;
//	}
//	cout << endl;
//}

template <typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
//template <typename T>void Sort(T arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				T buffer = arr[i];
//				arr[i] = arr[j];
//				arr[j] = buffer;
//			}
//		}
//	}
//}

template <typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;

}
 //template <typename T>T Sum(T arr[], const int n)
//{
//	T sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//
//}

 template <typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
//template <typename T>double Avg(T arr[], const int n)
/*
	return (double) Sum(arr, n) / n;
}{*/