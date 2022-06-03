#include <iostream>
using namespace std;
template<class T> void Bubble(T* arr, int size)
{
	T tmp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[10] = { 3, 6, 3, 7, 9, 1, 7, 4, 5, 0 };
	int b = 10;
	cout << "Массив до сортировки типа int: ";
	for (int i = 0; i < b; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	Bubble(a, b);
	cout << "Массив после сортировки типа int: ";
	for (int i = 0; i < b; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	double c[10] = { 3.2, 4.5, 0.5, 4.6, 7.6, 4.8, 2.2, 9.7, 2.4, 2.8 };
	cout << "Массив до сортировки типа double: ";
	for (int i = 0; i < b; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	Bubble(c, b);
	cout << "Массив после сортировки типа double: ";
	for (int i = 0; i < b; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;
}