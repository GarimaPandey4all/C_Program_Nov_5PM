#include <iostream>

using namespace std;

//Polymorphism:
//    poly: many and morphism: forms
//
//Person: son, employee, father, brother etc

//Polymorphism has two types:
//
//    1. Compile time polymorphism
//    a) Function Overloading and b) Function Overriding
//    2. Runtime polymorpshim
//    a) Operator Overloading

//Function Overloading

void add()
{
    int a, b;

    cout<<"Enter value for a and b:";
    cin>>a>>b;

    cout<<"Addition of Integer is: "<<(a + b)<<endl;
}

void add(float a, float b)
{
    cout<<"Addition of Float is: "<<(a + b)<<endl;
}

void add(double a, double b)
{
    cout<<"Addition of Double is: "<<(a + b)<<endl;
}

int main()
{
    add();
    add(67.99f, 23.56f);
    add(34.56, 67.89);

    return 0;
}
