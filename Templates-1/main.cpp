#include <iostream>

using namespace std;

//function template
template <class T>
T Add(T a, T b)
{
    cout<<"Addition is: "<<(a + b)<<endl;
}

int main()
{
    //Templates - Generic Programming - any types of data
//    1. Function Template
//    2. Class Template

    Add(10, 20);
    cout<<endl;

    Add(45.67f, 67.89f);
    cout<<endl;

    Add(49.7, 34.89);
    cout<<endl;

    return 0;
}
