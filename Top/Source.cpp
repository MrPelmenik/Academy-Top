#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	while (true)
	{
		cout << "1. Вывести массив" << endl;
		cout << "2. Вывести массив с индексами" << endl;
		cout << "3. Сортировка" << endl;
		cout << "4. Сортировка наоборот" << endl;
		cout << "5. Новый рандом значений" << endl;
		cout << "0. Выход" << endl;
		int input; 
		cout << "Введите пункт пиццы => ";
		cin >> input;

		switch (input)
		{
		case (1):
			for (int i = 0; i < size; i++)
				cout << arr[i] << " ";
			break;
		case (2):
			for (int i = 0; i < size; i++)
				cout << i << " = " << arr[i] << endl;
			break;

		case (3):
			sort(arr, arr + size);
			break;
		case (4):
			sort(arr, arr + size, [](int a, int b) {return a > b; });
			break;
		case (5):
			for (int i = 0; i < size; i++)
			{
				arr[i] = rand() % 10;
			}
			break;
		case (0):
			return;
		default:
			system("cls");
			cout << "Ничего не произошло" << endl;
			break;
		}
	}
	system("pause");
}