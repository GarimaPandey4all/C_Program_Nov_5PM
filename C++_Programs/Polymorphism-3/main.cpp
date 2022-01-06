#include <iostream>

using namespace std;

//Complex number:
//
//    5 + i8
//    3 + i4
//    8 + i12

class Complex{

private:
    int real, imag;

public:

    Complex(int real, int imag)
    {
//        this: this keyword hold current object's reference / address
//        instance variable = local variable
        this->real = real;
        this->imag = imag;
    }

    void print()
    {
        cout<<real<<" i"<<imag<<endl;
    }

};

int main()
{
    Complex obj1(5, 8);
    Complex obj2(3, 4);

    Complex obj3;

    obj3 = obj1 + obj2;

    return 0;
}
