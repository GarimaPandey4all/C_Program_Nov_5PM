#include <iostream>

using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout<<"Parent1 class"<<endl;
    }
};

class Parent2
{
public:
    Parent2()
    {
        cout<<"Parent2 class"<<endl;
    }
};

class Child : public Parent1, public Parent2{

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
