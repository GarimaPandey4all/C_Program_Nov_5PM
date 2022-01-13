#include <iostream>

using namespace std;

template <class T>
class Calculator
{
private:
    T a, b;

public:
    void setData(T x, T y)
    {
        a = x;
        b = y;
    }

    void getData()
    {
        cout<<(a + b)<<endl;
        cout<<(a - b)<<endl;
        cout<<(a * b)<<endl;
        cout<<(a / b)<<endl;
    }
};

int main()
{
    Calculator<int> obj1;
    obj1.setData(10, 20);

    Calculator<float> obj2;
    obj2.setData(45.67f, 78.8f);

    obj1.getData(); // int
    cout<<endl;
    obj2.getData(); // float

    return 0;
}
