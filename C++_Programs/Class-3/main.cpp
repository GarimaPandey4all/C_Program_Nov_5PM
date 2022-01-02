#include <iostream>

using namespace std;

//Encapsulation: Wrap all the Data members and class methods into a single unit is called
//Encapsulation.
//example of Encapsulation: class.
//
//Good Encapsulation = Encapsulation + Data Hiding

class EvenOdd {

//Data Security / Data Hiding / Abstraction
private:
    int n;

public:
    void setData(int a)
    {
        n = a;
    }

    void Calc()
    {
        (n % 2 == 0)? cout<<"Number is Even":cout<<"Number is Odd"<<endl;
    }
};

int main()
{
    EvenOdd obj;
    EvenOdd obj2;

    obj.setData(97);
    obj.Calc();

    //Now facing error due to data security or data hiding.
    /*
    obj2.n = 79; // doesn't have data security

    obj2.setData(obj2.n);
    obj2.Calc();

    */

    return 0;
}
