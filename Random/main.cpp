#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//���������� ������ ���������� �������
	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (minRand >= maxRand)cout << "Error: Try again ";
	} while (minRand>maxRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;
	}

	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}