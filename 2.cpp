#include <iostream>
using namespace std;
template <typename T> class Rectangle
{
private:
	T h = T();
	T a = T();
public:
	Rectangle() {};
	Rectangle(T x, T y)
	{
		h = x;
		a = y;
	}
	bool operator> (const Rectangle x)
	{
		return (h * a > x.h * x.a);
	}
	friend ostream& operator<< (ostream& outputStream, Rectangle x) {
		return outputStream << x.h * x.a;
	}
};
void Comparison(int s[])
{
	for (int i = 0; i < 3; i++)
	{
		if (s[i] > s[i + 1])
		{
			cout << "Больше";
		}
		else if (s[i] < s[i + 1])
		{
			cout << "Меньше";
		}
	}
}
template <typename T> void Bubble(T* arr, int size) {
	for (int i = size - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 12, y = 54;
	double a = 2.28, b = 1.4156;
	Rectangle <int> arr[3];
	Rectangle <double> buf[3];
	cout << "Cравнение значений: " << endl;
	for (int i = 0; i < 3; i++)
	{
		Rectangle <int> r(x - i, y);
		arr[i] = r;
		if (arr[i] > arr[i + 1])
		{
			cout << "Больше" << endl;
		}
		else {
			cout << "Меньше" << endl;
		}
		Rectangle <double> f(a - i, b);
		buf[i] = f;
	}
	cout << "Массив до сортировки типа int: "; for
		(int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}
	Bubble(arr, 3);
	cout << "\nМассив после сортировки: ";
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Массив до сортировки типа double: "; for
		(int i = 0; i < 3; i++)
	{
		cout << buf[i] << " ";
	}
	Bubble(buf, 3);
	cout << "\nМассив после сортировки: ";
	for (int i = 0; i < 3; i++)
	{
		cout << buf[i] << " ";
	}
	cout << endl;
	return 0;
}