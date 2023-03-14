#include <iostream>
using namespace std;
template <typename T1, typename T2> class DoubleBox
{
    private:
        T1 a = T1();
        T2 b = T2();
    public:
        DoubleBox() {};
        DoubleBox(const T1 x, const T2 y) : a(x), b(y) {};
    void set(const T1 x, const T2 y)
    {
        a = x;
        b = y;
    }
    void get(T1 &x, T2 &y)
    {
        x = a;
        y = b;
    }
};
int main()
{
    int Box1;
    double Box2;
    DoubleBox <double, int> Box(5.25, 25);
    Box.get(Box2,Box1);
    cout << Box1 << "\t" << Box2 << endl;
    Box.set(68.29, 12);
    Box.get(Box2, Box1);
    cout << Box1 << "\t" << Box2 << endl;
    return 0;
}
