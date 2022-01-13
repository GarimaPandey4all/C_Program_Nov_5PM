#include <iostream>

using namespace std;

//function template
template <class T>
T Add(T a, T b)
{
    cout<<"Addition is:"<<(a + b)<<endl;
}

int main()
{

    Add(10, 20);

    cout<<endl;

    Add(45.67f, 67.89f);

    cout<<endl;

    Add(23.56, 67.90);

    return 0;
}
