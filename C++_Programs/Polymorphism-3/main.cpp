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

    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int real, int imag)
    {
//        this: this keyword hold current object's reference / address
//        instance variable = local variable
        this->real = real;
        this->imag = imag;
    }

    Complex operator+ (Complex obj) // obj - obj2 reference
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    void print()
    {
        cout<<real<<" + i"<<imag<<endl;
    }

};

int main()
{
    Complex obj1(5, 8);
    Complex obj2(3, 4);

    Complex obj3;

    obj3 = obj1 + obj2; // obj1.add(obj2)

    obj3.print();

    return 0;
}
