#include"stdafx.h"
#include"Constants.h"
#include"FillRend.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	/*double d_arr_2[ROWS][COLS];
	int d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;*/
}


