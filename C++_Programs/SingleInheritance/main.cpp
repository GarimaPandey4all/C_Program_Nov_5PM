#include <iostream>

using namespace std;

//Inheritance: Parent-Child Relationship
//- Reuseability
//
//1. Single Inheritance
//2. Multiple Inheritance
//3. Multilevel Inheritance
//4. Heirarchical Inheritance
//5. Hybrid Inheritance

//Parent or Base
class Parent {

public:
    Parent()
    {
        cout<<"Parent Class"<<endl;
    }
};

//Child or Derived
class Child : public Parent // Inheritance - ":"
{
public:
    Child()
    {
        cout<<"Child Class"<<endl;
    }
};

int main()
{
    Child obj;

    return 0;
}
