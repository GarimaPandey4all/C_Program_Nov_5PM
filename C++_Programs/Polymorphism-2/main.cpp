#include <iostream>

using namespace std;

//Function Overriding

class Person {
public:

    void contNumber()
    {
        cout<<"Person's Contact Number";
    }
};

class Employee : public Person
{
public:
    Employee()
    {
        cout<<"This is a Employee Class"<<endl;
    }
    //Overriding : Parent's class function is hidden
    void contNumber()
    {
        cout<<"Employee's Contact Number"<<endl;
    }
};

int main()
{
    Employee obj;
    obj.contNumber();

    return 0;
}
