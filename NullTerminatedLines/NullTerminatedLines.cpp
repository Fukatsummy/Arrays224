﻿#include <iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::endl;
using std::cout;

//#define EXAMOLE_1
#define EXAMPLE_2

int StringLength(const char str[]);
void upper_case(char str[]);
void lower_case(char str[]);
void shrink(char str[]);
void remove_symbol(char str[], const char symbol);
bool is_palindrom(char str[]);


void main()
{
	setlocale(LC_ALL, "");

#ifdef EXAMPLE_1
	//char str[] = { 'H','e','l','l','o',0 };
	char str[] = "Hello";
	//str[] - строковая переменная
	//"Hello" - строковая константа
	cout << str << endl;
	cout << typeid(str).name() << endl;
	cout << typeid("Hello").name() << endl;
#endif // EXAMPLE_1

//#ifdef EXAMPLE_2
	//for (int i = 0; i < 256; i++)cout << i << "\t" << char(i) << endl;
	const int SIZE = 256;
	char str[SIZE] = "Аргентина манит негра";
	cout << "Введите строку: ";
	//cin >> str;
	SetConsoleCP(1251);
	//cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << str << endl;
//#endif // EXAMPLE_2
	//cout<<"Длина строки:  " << StringLength(str) << endl;
	//cout<<"Длина строки:  " << strlen(str) << endl;
	//cout<<"Длина строки в Байтах:  " << sizeof(str) << endl;
	//upper_case(str);
	//cout << str << endl;
	//lower_case(str);
	//cout << str << endl;
	//shrink(str);
	//cout << str << endl;
	cout << " Строка "<<(is_palindrom(str) ? "" : "HE ") << "является палиндромом" << endl;
}

int StringLength(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void upper_case(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		//первый вариант
		/*if(str[i] >='a' && str[i] <= 'z')str[i]-= ' ';
		if(str[i] >='а' && str[i] <= 'я')str[i]-= ' ';
		if (str[i] == 'ё') str[i]-= 'Ё';*/
		str[i] = toupper(str[i]);
		//Функция toupper(char s) принимает букву и возвращает такую же заглавную букву 
	}
}
void lower_case(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]);
	}
}
void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' '&& str[i + 1] == ' ')
		{
			for (int j = i + 1; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
		}
	}
}
void remove_symbol(char str[], const char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)str[j] = str[j + 1];
		}
	}
}
bool is_palindrom(char str[])
{
	char* buffer = new char[strlen(str) + 1]{};
	strcpy(buffer, str);
	lower_case(buffer);
	remove_symbol(buffer, ' ');
	int size = strlen(buffer);
	for (int i = 0; i < size; i++)
	{
		if (buffer[i] != buffer[size - 1 - i])
		{
			delete[] buffer;
			return false;
		}
	}
	delete[] buffer;
	return true;
}