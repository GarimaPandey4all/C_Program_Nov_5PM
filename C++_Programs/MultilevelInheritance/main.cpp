#include <iostream>

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout<<"Parent class"<<endl;
    }
};

class Child1 : public Parent
{
public:
    Child1()
    {
        cout<<"Child1 class"<<endl;
    }
};

class Child2 : public Child1{

public:
    Child2()
    {
        cout<<"Child2 Class"<<endl;
    }
};

int main()
{
    Child2 obj;
    //Child1 obj2;

    return 0;
}
