#include <iostream>
using namespace std;
template <typename T1, typename T2> class DoubleBox
{
private:
	T1 s = T1();
	T2 v = T2();
public:
	DoubleBox() {};
	DoubleBox(const T1 x, const T2 y) : s(x), v(y) {};
	void set(const T1 x, const T2 y)
	{
		s = x;
		v = y;
	}
	void get(T1& x, T2& y)
	{
		x = s;
		y = v;
	}
};
int main()
{
	int Box1;
	double Box2;
	DoubleBox <double, int> Box(5.76, 12);
	Box.get(Box2, Box1);
	cout << Box1 << "\t" << Box2 << endl;
	Box.set(14.88, 1);
	Box.get(Box2, Box1);
		cout << Box1 << "\t" << Box2 << endl;
	return 0;
}