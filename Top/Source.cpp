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
		cout << "1. ������� ������" << endl;
		cout << "2. ����������" << endl;
		cout << "0. �����" << endl;
		int input; 
		cout << "������� ����� ����� => ";
		cin >> input;

		switch (input)
		{
		case (1):
			for (int i = 0; i < size; i++)
				cout << arr[i] << endl;
			break;
		case (2):
			sort(arr, arr + size);
			break;
		case (0):
			return;
		default:
			system("cls");
			cout << "������ �� ���������" << endl;
			break;
		}
	}
	system("pause");
}